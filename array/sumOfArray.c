#include<stdio.h>
// int main(){
//     int marks[10],sum = 0;
// for(int i=0;i<=1;i++){
//     printf("enter the marks for student %d\n",i+1);
// scanf("%d",&marks[i]);
// sum=sum+marks[i];

// }printf("%d",sum);
//     return 0;
// }
int main(){
    int marks[10],product = 1;
for(int i=0;i<=5;i++){
    printf("Enter the marks for student :%d\n",i+1);
scanf("%d",&marks[i]);
product=product*marks[i];

}printf("%d",product);
    return 0;
}