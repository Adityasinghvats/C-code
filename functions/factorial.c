#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=2;i<=x;i++){
        fact = fact*i;
        }
    return fact;
}
int main(){
    // int n,r;
    // printf("Enter n:");
    // scanf("%d",&n);
    // printf("Enter r:");
    // scanf("%d",&r);
    // int nfact = factorial(n);
    // int rfact = factorial(r);
    // int nrfact = factorial(n-r);
    // int ncr = nfact/(rfact*nrfact);
    // printf("The value is:%d",ncr);
    // return 0;
    // to print factorial of a number
    int n = factorial(4);
    printf("%d",n);
}