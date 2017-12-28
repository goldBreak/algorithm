//
//  maxPublicString.c
//  K_list
//
//  Created by xsd on 2017/12/8.
//  Copyright © 2017年 com.shuxuan.fwex. All rights reserved.
//

#include "maxPublicString.h"

void getMax(char *firsts,char *seconds) {
    
    unsigned long firstLength = strlen(firsts);
    unsigned long secondLength = strlen(seconds);
    
    printf("first length = %lu ,second length = %lu \n",firstLength,secondLength);
    char tempChars[20];
    int tempIndex = 0,firstIndex = 0,secondIndex = 0;
    //用短的去匹配大的
    if (firstLength > secondLength) {
        
        while (1) {
            if (secondIndex < secondLength) {
                //
            }
        }
    } else {
        
    }
}

void getMaxPublic() {
    
    char firstString[20];
    char secondString[20];
    //input first chars
    printf("请输入第一个字符串:");
    gets(firstString);
    printf("请输入第二个字符串:");
    gets(secondString);
    
    //
    puts(firstString);
    puts(secondString);
    
    getMax(firstString, secondString);
}
