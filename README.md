# SCScrollowView
使用步骤 

1. 导入文件

 PageView.h

 PageView.m

2. 在需要引入轮播图的控制器里面引入头文件
      #import "PageView.h"
3. 在接口处设置属性   

 ```
  @property (strong, nonatomic)  PageView *pageView;//轮播view
 ```
4. 初始化轮播图 

 ```
- (void)viewDidLoad {
    [super viewDidLoad];
    //设置轮播
    _pageView=[[PageView alloc]initPageViewFrame:CGRectMake(0, 0, WFScreenW, 180)];
    [self.view addSubview:_pageView];
}
 ```



