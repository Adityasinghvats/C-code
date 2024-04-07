#include<stdio.h>
int factorial(int n){
    if(n==1 || n==0) return 1;/*To stop recursion from entering a infinite loop*/
    int recAns = n*factorial(n-1);
    return recAns;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int fact = factorial(n);
    printf("%d",fact);
    }