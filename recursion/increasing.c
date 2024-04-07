#include<stdio.h>
void increasing(int a, int n){/*parametrisied way of recursion*/
    if(a>n) return;
    printf("%d\n",a);
    increasing(a+1,n);
    return;
    
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    increasing(1,n);
    }