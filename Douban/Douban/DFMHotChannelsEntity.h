//
//  DFMHotChannelsEntity.h
//  Douban
//
//  Created by lk on 16/5/4.
//  Copyright © 2016年 唐家文. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DFMHotChannelsEntity : NSObject
//声明一个可变数组的属性，注意copy和Weak的区别。
@property (nonatomic, copy) NSMutableArray *channels;
@end
