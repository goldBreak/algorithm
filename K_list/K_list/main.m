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
#import "statisticsNumber.h"
#import "CloseNumber.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        
        // 最大矩形面积
        /*
        int number[] =
        {
            1, 1, 1, 1, 1,
            1, 1, 1, 1, 1,
            1, 1, 1, 1, 1,
            1, 1, 1, 1, 1,
            0, 0, 1, 0, 1
        };
        
        searchMaxRangle(number, 5, 5);
         */
        
        // 删除数
        /*
        int a[10] = {7,2,1,3,4,5,6,7,8,1};
        int count = 10;
        int delCount = 2;
        
        delList(a, 0, count, delCount);
        
        for (int i = 0; i < (count - delCount); i ++) {
            printf("%4d",a[i]);
        }
        */
        
        /*
        // 2 * 2
        int number[] =
        {
           1,2,
           0,3
        };
        
        cleanRangle(number,2,2);
        
        logOut(number, 4, 2);
        */
        
        /**
         计算最接近的数
         */
        
        closeNumber();
        
        printf("\n");
    }
    return 0;
}
