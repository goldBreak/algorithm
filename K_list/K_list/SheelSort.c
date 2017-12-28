//
//  SheelSort.c
//  K_list
//
//  Created by xsd on 2017/12/8.
//  Copyright © 2017年 com.shuxuan.fwex. All rights reserved.
//

#include "SheelSort.h"

void logoOut(int *number,int count);

void sort(int *number,int count) {
    
    int gap = count / 2;
    
    int numbers = count / 2;
    
    while (gap > 0) {
        
        for (int i = 0; i < numbers; i ++) {
            if (number[i] < number[i + gap]) {
                //exchange
                number[i] = number[i] + number[i+gap];
                number[i+gap] = number[i] - number[i+gap];
                number[i] = number[i] - number[i+gap];
            }
        }
        
        gap = gap / 2;
    }
    logoOut(number, count);
}

void logoOut(int *number,int count) {
    for (int i = 0; i < count; i ++) {
        printf("%4d",number[i]);
    }
    printf("\n");
}

void sheelSortAct() {
    //
    int *instance;
    int number;
    printf("请输入字符串长度:\n");
    scanf("%d",&number);
    instance = (int *)alloca(sizeof(int) * number);
    for (int i = 0; i < number; i ++) {
        printf("请输入第%d个数：",i+1);
        scanf("%d",instance+i);
    }
    
    sort(instance,number);
}
