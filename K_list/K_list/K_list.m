//
//  K_list.m
//  K_list
//
//  Created by xsd on 2017/11/27.
//  Copyright © 2017年 com.shuxuan.fwex. All rights reserved.
//

#import "K_list.h"

@implementation K_list

/**
 先算一下全部的排列
 
 @param argc 入参
 @return 排列
 */
int list_int(int argc) {
    
    if (argc <= 1) {
        return 1;
    } else {
        return argc * list_int(argc - 1);
    }
}


/**
 更改一下排列
 
 @param list 数组
 @param indexs 数组
 @param dur 结束的标签
 */
void exchangeArray(int *list,int indexs, int  dur) {
    // N ...
    //    int list_count = list_int(indexs);
    //先交换一下，然后再开始
    
}

void k_list_sempale(int n, int k) {
    
    //先算全排列 --，--
    int list_count = list_int(n);
    
    int *number = (int *)alloca(sizeof(int) * n);
    
    for (int i = 0; i < n; i ++) {
        number[i] = i + 1;
    }
    
    if (list_count < k) {
        printf("排列是错误的，不存在这个数！\n");
        return;
    } else if (list_count == k) {
        printf("lish is\n");
        for (int i = 0; i < n; i ++) {
            printf("%4d",number[i]);
        }
        printf("\n");
        return;
    }
    
    //先确定k 到底是第几个!
    int count = n, temp = list_count;
    while (count > 0) {
        if (k <= temp / (count - 1)) {
            count --;
            temp /= count;
        } else {
            break;
        }
    }
    printf("这是第N个参数   %d\n",count);
    
    //判断出来是第几个,剩下的只能进行穷举法
    exchangeArray(number, count - 1, k);
    
}

void logData(int *number ,int length ,int high) {
    
    for (int i = 0; i < length; i ++) {
        
        for (int j = 0; j < high; j ++) {
            
            printf("%4d",number[i * length +j]);
        }
        printf("\n");
        
    }
    
}
@end
