//
//  DelNumber.h
//  K_list
//
//  Created by xsd on 2017/11/27.
//  Copyright © 2017年 com.shuxuan.fwex. All rights reserved.
//
//
//
// descrption
//给出一个字符串 A，表示一个 n 位正整数, 删除其中 k 位数字, 使得剩余的数字仍然按照原来的顺序排列产生一个新的正整数。写一个函数找到删除 k 个数字之后的最小正整数。其中 N <= 240，k <= N。


#import <Foundation/Foundation.h>

@interface DelNumber : NSObject

void delList(int *listArray,int index,int count,int delCount);

@end
