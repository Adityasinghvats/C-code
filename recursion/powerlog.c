#include<stdio.h>
int powlog(int a, int b){
    if(b==0) return 1;
    int x = powlog(a,(b/2));
    if(b%2==0) 
         return x*x;
    else
         return x*x*a;
}
int main(){
    int a,b;
    printf("Enter base:");
    scanf("%d",&a);
    printf("Enter power:");
    scanf("%d",&b);
    int n = powlog(a,b);
    printf("Result is %d",n);
    }