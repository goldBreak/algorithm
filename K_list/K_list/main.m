//
//  main.m
//  K_list
//
//  Created by xsd on 2017/11/13.
//  Copyright © 2017年 com.shuxuan.fwex. All rights reserved.
//

#import <Foundation/Foundation.h>
#include "MaxRangle.h"
#include "DelNumber.h"
#include "K_list.h"
#include "CleanRangle.h"
#include "CloseNumber.h"
#include "statisticsNumber.h"
#include "maxPublicString.h"
#include "SheelSort.h"
#include "odd_evenList.h"
#include "BrokeBalloon.h"

int menue(){
    int choise = 0;
    
    printf("*******************************************\n");
    printf("***** 1. 给出一个字符串 A，表示一个 n 位正整数, 删除其中 k 位数字, 使得剩余的数字仍然按照原来的顺序排列产生一个新的正整数。 *****\n");
    printf("***** 2. 给你一个二维矩阵，权值为 False 和 True，False 为0，true 为1写一个函数找到一个最大的矩形，使得里面的值全部为True，并输出它的面积。 *****\n");
    printf("***** 3. 给定一个m×n矩阵，如果一个元素是0，则将其所在行和列全部元素变成0。并要求需要在原矩阵上完成操作。 *****\n");
    printf("***** 4. 给一个包含 n 个整数的数组 num，写一个函数找到和与给定整数 target 最接近的三元组，返回这三个数的和。 *****\n");
    printf("***** 5. 给出一个有 n 个整数的数组 S，在 S 中找到三个整数 a, b, c，使得 a + b + c = 0。写一个函数找到所有满足要求的三元组 *****\n");
    printf("***** 6. 写一个函数分割一个整数数组，使得奇数在前偶数在后。 *****\n");
    printf("***** 7. 有 n 个气球，编号为 0到 n-1，每个气球都有一个分数，存在 nums 数组中。每次吹气球i可以得到的分数为 nums[left] * nums[i] * nums[right]，left 和 right 分别表示i气球相邻的两个气球。当i气球被吹爆后，其左右两气球即为相邻。要求吹爆所有气球，得到最多的分数。写一个函数求出最后的分数。 *****\n");
    
    printf("***** 0. 退出操作。 *****\n");
    
    printf("*******************************************\n");
    printf("\n\n");
    
    printf("请输入你的选择:");
    scanf("%d",&choise);
    getchar();
    return choise;
}

void realFunction(int choise) {
    
    switch (choise) {
        case 1:
        {
            int a[10] = {7,2,1,3,4,5,6,7,8,1};
            int count = 10;
            int delCount = 21;
            
            delList(a, 0, count, delCount);
            
            for (int i = 0; i < (count - delCount); i ++) {
                printf("%4d",a[i]);
            }
        }
            break;
        case 2:
        {
            int number[] =
            {
                1, 1, 1, 1, 1,
                1, 1, 1, 1, 1,
                1, 1, 1, 1, 1,
                1, 1, 1, 1, 1,
                0, 0, 1, 0, 1
            };
            
            searchMaxRangle(number, 5, 5);
        }
            break;
        case 3:
        {
            // 2 * 2
            int number[] =
            {
                1,2,
                0,3
            };
            
            cleanRangle(number,2,2);
            
            logOut(number, 4, 2);
        }
            break;
        case 4:
        {
             closeNumbe();
        }
            break;
        case 5:
        {
            sheelSortAct();
        }
            break;
        case 6:
        {
             oddEvenList();
        }
            break;
        case 7:
        {
            brokeBalloon();
        }
            break;
        default:
            break;
    }
}


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        int choise = 1;
        
        while (choise) {
            choise = menue();
            if (choise) {
                realFunction(choise);
                printf("\n");
            }
        }

    }
    return 0;
}
