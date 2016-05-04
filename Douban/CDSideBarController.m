//
//  CDSideBarController.m
//  Douban
//
//  Created by lk1 on 16/5/4.
//  Copyright © 2016年 唐家文. All rights reserved.
//

#import "CDSideBarController.h"
static CDSideBarController* sharedInstance;//侧滑
@implementation CDSideBarController

//@synthesize自动产生set和get方法
@synthesize menuColor=_menuColor;
@synthesize isOpen=_isOpen;

#pragma mark------Singleton
+(CDSideBarController *)sharedInstanceWithImages:(NSArray*)images
{
    //整个片断在程序运行过程中只执行一遍
    
}
+(CDSideBarController *)sharedInstance
{
    
}
- (CDSideBarController*)initWithImages:(NSArray*)buttonList
{
    
}
- (void)insertMenuButtonOnView:(UIView*)view atPosition:(CGPoint)position
{
    
}
- (void)dismissMenu
{
    
}

@end
