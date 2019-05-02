//
//  main.cpp
//  Home Work 3
//
//  Created by Ho Tsung Kai on 2019/3/22.
//  Copyright © 2019 Ho Tsung Kai. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[])
{
    float weight,height,BMI,a ;
    printf("請輸入體重（公斤）:");
    scanf("%f",&weight);
    printf("請輸入身高（公尺）:");
    scanf("%f",&height);
    a=height*height;
    BMI=weight/a;
    printf("您的BMI值為：%f\n",BMI);
    return 0;
}
