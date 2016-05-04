//
//  PlayerController.h
//  Douban
//
//  Created by lk on 16/5/4.
//  Copyright © 2016年 唐家文. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MediaPlayer/MPMoviePlayerController.h>
#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "AppDelegate.h"
//#import "NetworkManager.h"
//#import "ProtocolClass.h"

//这里面的MPMoviePlayerController在9.0版本后改成了AVPlayer....所以要想用这个的话就
@interface PlayerController : MPMoviePlayerController
//
//@property id<DoubanDelegate> songInfoDelegate;

//FM播放列表
//@property (nonatomic) DFMPlaylist *playList;

//共享列子（实例）
+ (instancetype)sharedInstance;

-(instancetype)init;
//开始播放
-(void)startPlay;

//播放操作
/*
暂停；
重启
喜欢的歌；
不喜欢的歌；
删除歌曲；
跳过歌曲；
 */
-(void)pauseSong;
-(void)restartSong;
-(void)likeSong;
-(void)dislikesong;
-(void)deleteSong;
-(void)skipSong;
@end
