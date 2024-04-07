#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        char name[15];
        float attendance;
        int roll;
    }std1,std2,std3;

    /*use dot operator to access*/
    // struct student std1;
    std1.attendance = 78.5;
    strcpy(std1.name,"Aditya Kumar");/*Only way to enter value for a string after it was intialised*/
    std1.roll = 2;
    printf("%s",std1.name);
    return 0;
}