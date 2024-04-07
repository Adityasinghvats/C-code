#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    int recAns = fibo(n-1)+fibo(n-2);
    return recAns;
}
int main(){
    int n;
    printf("Enter the term:");
    scanf("%d",&n);
    int a = fibo(n);
    printf("The %dth term is %d",n,a);
    }