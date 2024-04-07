#include<stdio.h>
#include<string.h>
typedef struct student{
        char firstname[15];
        char lastname[15];
        float attendance;
        int roll;
        }student;
void fun(student A){
    strcpy(A.lastname,"Kumar");
    printf("%d\n",A.roll);
    printf("%s %s",A.firstname,A.lastname);
    return;
}
int change(student B){
    int chng = B.roll = 60;
    return chng;
}        
int main(){
   student a;
   a.roll = 1;
   change(a);
   printf("%d",a.roll);
   strcpy(a.firstname,"Aditya");
//    fun(a);
        
}