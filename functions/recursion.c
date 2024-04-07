#include<stdio.h>
int T(n){
    if(n>0){
        T(n-1);
        printf("%d",n);
    }
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    T(n);
}