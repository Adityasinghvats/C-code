#include<stdio.h>
#include<string.h>
int main(){
    typedef struct student{
        char name[15];
        float attendance;
        int roll;
    }student;
    typedef struct geniusstudent{
        student normal;
        char ability[15];
    }geniusstudent;
    geniusstudent first;
    strcpy(first.ability,"Very well behaved");
    strcpy(first.normal.name,"Aditya");
    first.normal.attendance = 95;
    first.normal.roll = 1;
    printf("%s",first.normal.name);
   }