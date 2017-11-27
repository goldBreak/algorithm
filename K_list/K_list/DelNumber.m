//
//  DelNumber.m
//  K_list
//
//  Created by xsd on 2017/11/27.
//  Copyright © 2017年 com.shuxuan.fwex. All rights reserved.
//

#import "DelNumber.h"

@implementation DelNumber

void forward(int *listArray,int index,int tempIndex,int count) {
    
    if (index == tempIndex) {
        return;
    }
    
    for (int i = 0; i < count; i ++) {
        listArray[index + i] = listArray[tempIndex + i];
    }
}

void delList(int *listArray,int index,int count,int delCount) {
    
    if (count <= delCount) {
        return;
    }
    if (delCount <= 0) {
        return;
    }
    
    // counts --
    int number = index +  delCount;
    
    int temp = listArray[index],tempIndex = index;
    for (int i = index + 1; i <= number ; i ++) {
        
        if (temp > listArray[i]) {
            temp = listArray[i];
            tempIndex = i;
        }
    }
    //移动
    forward(listArray,index, tempIndex, index + count - tempIndex);
    
    
    delList(listArray, index + 1, count - (tempIndex - index), delCount - (tempIndex - index));
}


@end
