#include<stdio.h>
void increase(int n){
    if(n==0) return;
    // printf("%d\n",n);
    increase(n-1);
    printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    increase(n);
    }