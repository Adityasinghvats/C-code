#include<stdio.h>
int pow(int a, int b){
    if(b==0) return 1;
    int recAns = a*pow(a,b-1);
    return recAns;
}
int main(){
    int a,b;
    printf("Enter base:");
    scanf("%d",&a);
    printf("Enter power:");
    scanf("%d",&b);
    int n = pow(a,b);
    printf("Result is %d",n);
    }