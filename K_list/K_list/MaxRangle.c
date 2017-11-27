//
//  MaxRangle.c
//  K_list
//
//  Created by xsd on 2017/11/22.
//  Copyright © 2017年 com.shuxuan.fwex. All rights reserved.
//

#include "MaxRangle.h"

void handleRangle(int number[],int length,int height,int *rangle) {
    //...
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < height; j++) {
            //初始化一个值
            
            //⤴️
//            if (i - 1 > 0) {
//                rangle[(i * length + j) * 4] = number[i * length +j] & number[(i-1) * length + j];
//            } else {
//                rangle[(i * length + j) * 4] = -1;
//            }
//
//←
//            if (j - 1 > 0) {
//                rangle[(i * length + j) * 4 + 3] = number[i * length +j] & number[i * length + j -1];
//            } else {
//                rangle[(i * length + j) * 4 + 3] = -1;
//            }
            //➡️
            int k = (i * length + j) * 4;
            
            if (j + 1 < height) {
                rangle[k] = number[i * length +j] & number[i * length +j + 1];
            } else {
                rangle[k] = -1;
            }
            
            //⬇️
            if (i + 1 < length) {
                rangle[k + 1] = number[i * length +j] & number[(i + 1) *length + j];
            } else {
                rangle[k + 1] = -1;
            }
            
            //存控制信息
            rangle[k + 2] = i * length +j + 1 ;
            rangle[k + 3] = (i + 1) *length + j;
        }
    }
}

void logOut(int number[],int length) {
    
    for (int i = 0; i < length; i ++) {

        if (i % 4 == 0) {
            printf("\n");
        }
        
        printf("%5d",number[i]);
    }
    
    printf("\n\n\n\n\n");
}
void calculateData(int *rangle,int length ,int width , int height) {
    
    //正式计算
    int maxCount = 0;
    //length 算一半
    int tempCount = 1,tempK = 0, xCount = 0, yCount = 0, tempY = 0;
    
    for (int i = 0; i < length / 4; i ++) {
        
        xCount = 0;
        yCount = 0;
        
        tempCount = 1;
        //先计算X
        tempK = i * 4;
        while (rangle[tempK] == 1) {
            tempCount += 1;
            tempK = rangle[tempK + 2] * 4;//
            xCount ++;
        }
        maxCount = maxCount > tempCount ? maxCount : tempCount;
        //计算Y
        tempK = i * 4;
        tempCount = 1;
        while (rangle[tempK + 1] == 1) {
            tempCount += 1;
            tempK = rangle[tempK + 3] * 4;//
            yCount ++;
        }
        maxCount = maxCount > tempCount ? maxCount : tempCount;
        
        //计算X和Y
        
//        tempK = rangle[tempK + 2] * 4;//
        if (xCount != 0 && yCount != 0) {
            //按照Y来算
            for (int k = 1; k < xCount; k ++) {
                //
                tempY = 0;
                
                tempK = (i + k) * 4;
//                tempK = rangle[tempK + 2] * 4;//
                
                while (rangle[tempK + 1] == 1) {
                    tempK = rangle[tempK + 3] * 4;//
                    tempY ++;
                }
                yCount = yCount > tempY ? tempY : yCount;
                if (yCount == 0) {
                    break;
                }
            }
            tempCount = (xCount + 1) * (yCount + 1);
            maxCount = maxCount > tempCount ? maxCount : tempCount;
        }
    }
    
    printf("最后计算出来的结果是：%d",maxCount);
}

void searchMaxRangle(int number[],int lenght,int height) {
    
    //初始化存储空间
    int *tempRangle = (int *)alloca(sizeof(int) * height * lenght * 4);
    
    handleRangle(number, lenght, height, tempRangle);
    
    calculateData(tempRangle, height * lenght * 4, lenght, height);
    //
    logOut(tempRangle,height * lenght * 4);
}


