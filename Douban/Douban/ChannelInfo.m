//
//  ChannelInfo.m
//  Douban
//
//  Created by YANG on 16/5/3.
//  Copyright © 2016年 唐家文. All rights reserved.
//

#import "ChannelInfo.h"

static ChannelInfo *currentChannel;//当前的频道
static NSArray *channelsTitleArray;//存放频道title的数组

@implementation ChannelInfo
-(instancetype)initWithDictionary:(NSDictionary *)dictionary{
    if (self = [super init]) {
        self.ID = [dictionary objectForKey:@"id"];
        self.name = [dictionary objectForKey:@"name"];
    }
    return self;
}

+ (NSMutableArray *)channels{
    static NSMutableArray *channels;
    static dispatch_once_t onceToken;//只执行一次的任务
    dispatch_once(&onceToken, ^{
        channels = [NSMutableArray array];
    });
    return channels;
}

+ (instancetype)currentChannel
{
    if (!currentChannel)
    {
        currentChannel = [[self alloc] init];
    }
    return currentChannel;
}
//更新当前的频道
+ (void)updateCurrentCannel:(ChannelInfo *)channel
{
    currentChannel = channel;
}

+ (NSArray *)channelsTitleArray
{
    if (!channelsTitleArray) {
        channelsTitleArray = [NSArray array];
    }
    return channelsTitleArray;
}

+ (void)updateChannelsTitleArray:(NSArray *)array{
    channelsTitleArray = array;
}

+ (NSDictionary *)replacedKeyFromPropertyName
{
    return @{@"ID" : @"id",
             };
}

@end
