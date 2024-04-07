#include<stdio.h>
#include<string.h>
int main(){
    int i,k;
    typedef struct student{
        char name[15];
        float attendance;
        int roll;
    }student;
    student std[2];
    // strcpy(std[0].name,"Aditya Kumar");
    // strcpy(std[1].name,"Aditi Kumari");
    // strcpy(std[2].name,"Aarav Kumar");
    // std[0].attendance = 78.9;
    // std[0].roll = 1;

    // std[1].attendance = 86.9;
    // std[1].roll = 2;
    for(i = 0;i<3;i++){
        printf("Enter the namefor student %d:\n",i);
        scanf("%s",std[i].name);
        printf("Enter the attendance for student %d:\n",i);
        scanf("%f",&std[i].attendance);
        printf("Enter the roll number for student %d:\n",i);
        scanf("%d",&std[i].roll);

    }
for(i = 0;i<3;i++){
    printf("Name : %s\n",std[i].name);
     printf("Attendance : %f\n",std[i].attendance);
      printf("Roll : %d\n",std[i].roll);
}
    
    
    
    }