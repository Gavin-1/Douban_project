//
//  DFMRecChannelsEntity.h
//  Douban
//
//  Created by lk on 16/5/3.
//  Copyright © 2016年 唐家文. All rights reserved.
//

#import <Foundation/Foundation.h>
//解决循环嵌套应用
@class ChannelInfo;
@interface DFMRecChannelsEntity : NSObject
//强制引用ChannelInfo，作为属性
@property(nonatomic,strong)ChannelInfo*res;
@end
