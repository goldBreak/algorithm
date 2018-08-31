//
//  BrokeBalloon.c
//  K_list
//
//  Created by xsd on 2018/4/8.
//  Copyright © 2018年 com.shuxuan.fwex. All rights reserved.
//
//有 n 个气球，编号为 0到 n-1，每个气球都有一个分数，存在 nums 数组中。每次吹气球i可以得到的分数为 nums[left] * nums[i] * nums[right]，left 和 right 分别表示i气球相邻的两个气球。当i气球被吹爆后，其左右两气球即为相邻。要求吹爆所有气球，得到最多的分数。写一个函数求出最后的分数。

#include "BrokeBalloon.h"



void delBalloon(int *score, int count,int mid) {
 
    for (int i = mid; i < count - 1; i ++) {
        score[i] = score[i + 1];
    }
}

//规则： 分成 a , b , c三组
//       b 组合是最小的
// 4 1 5 10 最大是270
// 20 + 200 + 40 + 10

// 1,4,10,5,2
// count > 3，删除小的，留下较大的3个。
//
// count == 3，     a * b * c + a * c > a * b + b * c


// 200 + 20 + 5 + 10 + 5

void handleBalloon(int *result, int *score, int count) {
    
    if (count <= 0) {
        printf("\n最终结果是： %d\n",*result);
        return;
    }
    if (count == 1) {
        *result += score[0];
        return;
    }
    
    int index = 0, value = 0;
    
    *result += value;
    printf("\nvalue is %d\n",*result);
    delBalloon(score, count, index);
    
    handleBalloon(result, score, count-1);
}


//假设是没有0这种数的，如果有，第一步应该是清掉0，直接删除0，对结果没有影响的
void brokeBalloon() {
    //入口
    //先输入气球个数
    int balloonNumber ;
    printf("\n请先输入气球个数:\n");
    scanf("%d",&balloonNumber);
    
    //再输入气球对应的分数
    int *score = (int *)alloca(sizeof(int) * balloonNumber);
    for (int i = 0; i < balloonNumber; i ++) {
        //
        printf("请输入第%d个数：",i);
        scanf("%d",&score[i]);
    }
    
    int result = 0;
    
    handleBalloon(&result, score, balloonNumber);
   
    printf("\n 最终结果为: %d\n",result);
}


