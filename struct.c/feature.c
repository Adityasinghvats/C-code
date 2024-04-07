#include<stdio.h>
#include<string.h>
int main(){
    typedef struct student{
        char name[15];
        float attendance;
        int roll;
    }student;
    student a,b,c;
    a.roll = 1;
    a.attendance = 90;
    strcpy(a.name,"Aditya");
    // If we want to copy all values of student a into student b we can do a = b
    b = a;/*deep copy where orgiginal value id not changed*/
    printf("%d",b.roll);
    
    
    
    
    
    }



