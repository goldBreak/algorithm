//
//  CloseNumber.c
//  K_list
//
//  Created by xsd on 2017/12/5.
//  Copyright © 2017年 com.shuxuan.fwex. All rights reserved.
//
//给一个包含 n 个整数的数组 num，写一个函数找到和与给定整数 target 最接近的三元组，返回这三个数的和。
//
//注意事项：
//只需要返回三元组之和，无需返回三元组本身。

#include "CloseNumber.h"



int calculate(int *number,int target,int count) {
    
    if (count == 3) {
        //直接返回
        return number[0] + number[1] + number[2];
    }
    //1.蛮力法
    
    int temp ;
    for (int i = 0; i < count; i ++) {
        printf("%4d",number[i]);
    }
    printf("\n");
    int *tempIndex = (int *)alloca(sizeof(int) * count * count);
    for (int i = 0; i < count; i ++) {
        for (int j = 0; j < count; j ++) {
            tempIndex[ i * count + j] = number[i] + number[j];
        }
    }
    for (int i = 0; i < count * count; i ++) {
        if ( i % count == 0) {
            printf("\n");
        }
        printf("%4d",tempIndex[i]);
    }
    temp = number[0] + tempIndex[count + 2] - target;//第一次初始化
    int tempSub = 0;
    for (int i = 0; i < count; i ++) {
        
        //
        for (int j = i + 1; j < count; j ++) {
            for (int k = j + 1; k < count; k ++) {
                tempSub = number[i] + tempIndex[j * count + k] - target;
                if (abs(temp) >= abs(tempSub)) {
                    temp = tempSub;
                }
            }
        }
        
    }
    
    return temp + target;
}

void closeNumbe() {
    int *number ;
    int count;
    int target;
    
    printf("请输入数组的长度:");
    scanf("%d",&count);
    if (count < 3 ) {
        printf("数组的长度要大于3！\n");
        exit(0);
    }
    number = (int *)alloca(sizeof(int)*count);
    for (int i = 0; i < count; i ++) {
        printf("请输入第%d个数:",i+1);
        scanf("%d",(number + i));
    }
    printf("请输入target ：");
    scanf("%d",&target);
    //
    // 四个数   X + Y + Z - A 最小值，蛮力法就是计算所有的X,Y,Z组合，计算出来数组，然后再进行比较
    // (X) + (Y) - A == 0的组合
    // （X） - A == 0；
    //
    
    int result = calculate(number, target, count);
    printf("\n最终计算结果:%d",result);
}
