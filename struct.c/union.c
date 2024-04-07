#include<stdio.h>
#include<string.h>
typedef union student{
        char name[15];
        float attendance;
        int roll;
        }student;
int main(){
   student a;
   a.roll = 4;
   a.attendance= 78;
   strcpy(a.name,"Aditya"); 
   printf("%s\n",a.name);
   printf("%d\n",a.roll);
   printf("%f\n",a.attendance);
        
} 