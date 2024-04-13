#include<stdio.h>
#include<string.h>
//  typedef struct student{
//         char name[15];
//         float attendance;
//         int roll;}student;
//         student Aditya;
// int main (){
//     student* x = &Aditya;
//     strcpy(Aditya.name,"ADITYA");
//     Aditya.roll = 1;
//     Aditya.attendance = 90;
//     printf("%p\n",x);
//     printf("%p\n",Aditya.name);
//     printf("%p\n",&Aditya.roll);
//     printf("%p",&Aditya.attendance);
//     return 0;
// }
 typedef struct student{
        char name[15];
        float attendance;
        int roll;
        }student;
        student Aditya;
    int main (){
    student* x = &Aditya;
    (*x).roll = 4;/*To change value using pointer*/
    printf("%d",Aditya.roll);
    }