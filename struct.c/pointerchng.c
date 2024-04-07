#include<stdio.h>
#include<string.h>
typedef struct student{
        char name[15];
        float attendance;
        int roll;
        }student;
void change(student* b){
    // (*b).roll = 90;dono same chiz krega
    b->roll = 90;
    (*b).attendance = 78;
    strcpy((*b).name,"Aditi");
    return;
}
int main(){
   student a = {"Aditya",67,4};/*other method to give values*/
//    a.roll = 4;
//    a.attendance = 67;
//    strcpy(a.name,"Aditya");
   printf("%s\n",a.name);
   printf("%d\n",a.roll);
   printf("%f\n",a.attendance);
   change(&a);
   printf("%s\n",a.name);
   printf("%d\n",a.roll);
   printf("%f\n",a.attendance);
        
}