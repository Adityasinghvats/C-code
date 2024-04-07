#include<stdio.h>
void decrease(int n){
    if(n==0) return;
    printf("%d\n",n);
    decrease(n-1);
    return;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    decrease(n);
    }
// void greeting(int n){
//     if(n<1) return;
//     printf("Good Morning\n");
//     greeting(n-1);
//     return;
// }
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     greeting(n);
//     }