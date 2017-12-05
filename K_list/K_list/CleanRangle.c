//
//  CleanRangle.c
//  K_list
//
//  Created by xsd on 2017/11/28.
//  Copyright © 2017年 com.shuxuan.fwex. All rights reserved.
//

#include "CleanRangle.h"


void insertValue(int *array,int value,int *x) {
    
    for (int i = 0; i < *x; i ++) {
        //
        if (array[i] == value) {
            return;
        }
    }
    array[*x] = value;
    *x += 1;
}

/**
 给定一个m×n矩阵，如果一个元素是0，则将其所在行和列全部元素变成0。并要求需要在原矩阵上完成操作

 @param array 矩阵
 @param width 宽
 @param height 高
 */
void cleanRangle(int *array,int width,int height) {
    
    //
    int *zeroWidth = (int *)alloca(sizeof(int) * width);
    int *zeroHeigth = (int *)alloca(sizeof(int) * height);
    
    for (int i = 0; i < width; i ++) {
        zeroWidth[i] = 0;
    }
    
    for (int i = 0; i < height; i ++) {
        zeroHeigth[i] = 0;
    }
    
    int autox = 0,autoy = 0;
    
    // 1.遍历一遍！
    for (int j = 0; j < height; j ++) {
        for (int i = 0; i < width; i++) {
            // 2. 这个吧！
            if (array[j * width + i] == 0) {
                insertValue(zeroHeigth, j, &autox);
                insertValue(zeroWidth, i, &autoy);
            }
        }
    }
    
    for (int i = 0; i < autox; i ++) {
        for (int j = 0; j < width; j ++) {
            array[zeroHeigth[i] * width + j] = 0;
        }
    }
    
    for (int i = 0; i < autoy; i ++) {
        for (int j = 0; j < height; j ++) {
            array[zeroWidth[i] + j * width] = 0;
        }
    }
}
