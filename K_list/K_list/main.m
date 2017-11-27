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


int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
        /*
        int k_number = 0;
        int k_int = 0;
        
        printf("请输入整数N:\n");
        scanf("%d",&k_number);
        printf("请输入整数K:\n");
        scanf("%d",&k_int);
        
        k_list_sempale(k_number,k_int);
         */
        
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
        int a[10] = {7,2,1,3,4,5,6,7,8,1};
        int count = 10;
        int delCount = 2;
        
        delList(a, 0, count, delCount);
        
        for (int i = 0; i < (count - delCount); i ++) {
            printf("%4d",a[i]);
        }
        
        printf("\n");
    }
    return 0;
}
