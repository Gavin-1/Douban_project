//
//  CDSideBarController.h
//  Douban
//
//  Created by lk1 on 16/5/4.
//  Copyright © 2016年 唐家文. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//添加一个协议，协议可以继承和被继承；协议中的方法有@optional和@requirel两种
@protocol CDSideBarControllerDelegate <NSObject>

-(void)menuButtonClicked:(int)index;

@end

@interface CDSideBarController : NSObject
{
    UIView* _backgroundMenuView;
    UIButton* _menuButton;
    NSMutableArray* _buttonList;
}
@property(nonatomic,retain)UIColor* menuColor;
@property(nonatomic,assign)BOOL isOpen;

@end
