//
//  odd_evenList.c
//  K_list
//
//  Created by xsd on 2017/12/28.
//  Copyright © 2017年 com.shuxuan.fwex. All rights reserved.
//

#include "odd_evenList.h"

#pragma mark - couclate
void algorithm(int *list,int count) {
    
    //就是一个排序算法
    int left = 0;
    int right = count - 1;
    
    while (left < right) {
        //
        while (list[left] % 2 != 0 && left < right) {
            left += 1;
        }
        //
        while (list[right] % 2 == 0 && left < right) {
            right -= 1;
        }
        
        if (left < right) {
            //exchange
            list[left] += list[right];
            list[right] = list[left] - list[right];
            list[left] = list[left] - list[right];
        }
    }
}

void customerLog(int *list,int count){
    
    for (int i = 0 ; i < count ; i ++) {
        printf("%4d",list[i]);
    }
}

//奇偶算法入口
void oddEvenList() {
    
    //10个
    int list[] = {10,11,223,44,24,556,78,77,55,98};
    algorithm(list,10);
    
    customerLog(list,10);
}
