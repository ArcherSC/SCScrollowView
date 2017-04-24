//
//  PageView.h
//  轮播图封装
//
//  Created by sc on 16-10-24.
//  Copyright (c) 2016年 sc. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PageViewDelegate <NSObject>

- (void)didSelectPageViewWithNumber:(NSInteger)selectNumber;

@end


@interface PageView : UIView
@property (nonatomic ,strong) NSTimer *timer;
@property (nonatomic ,strong) UIPageControl *pageControl;
@property (nonatomic, strong) NSArray * imageArray;

@property (nonatomic ,assign) NSTimeInterval duration;

@property (nonatomic ,assign) BOOL isWebImage;

-(instancetype)initPageViewFrame:(CGRect)frame;

@property (nonatomic ,weak) id<PageViewDelegate> delegate;

@end
