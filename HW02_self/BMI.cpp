//
// Created by Rafael Szuminski on 2/6/20.
//

#include <iostream>
#include "BMI.h"

//inches and pounds
float male_calc(float init_b_weight, float init_waist_m){
    float A1, A2;
    float B;
    float body_fat, body_fat_p;
    A1 = (init_b_weight * 1.082) + 94.42;
    A2 = (init_waist_m * 4.15);
    B = (A1 - A2);
    std::cout<<"[Log]"<<B<<"\n";
    body_fat = init_b_weight - B;
    body_fat_p = (body_fat*100)/init_b_weight;
    return body_fat_p;
}

int male_calc2(){
    //Body Fat Percentage (%) = 163.205 x log10 (waist + hip – neck) – 97.684 x log10 (height) – 78.387
}

float female_calc(float init_b_weight, float init_wrist_m, float init_waist_m, float init_hip_m, float init_forearm_m ){
    float A1, A2, A3, A4, A5;
    float B;
    float body_fat, body_fat_p;
    A1 = (init_b_weight * 0.732) + 8.987;
    A2 = (init_wrist_m/3.140);
    A3 = (init_waist_m)*0.157;
    A4 = (init_hip_m)*0.249;
    A5 = (init_forearm_m)*0.434;
    B = (A1 + A2 - A3 - A4 + A5);
    body_fat = init_b_weight - B;
    body_fat_p = (body_fat*100)/init_b_weight;
    return body_fat_p;
}
