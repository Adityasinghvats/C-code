#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        char name[15];
        float attendance;
        int roll;
    }std1,std2,std3;
    struct brilliantstudent{
        float extraCredits;
        struct student std4;
    };
    }