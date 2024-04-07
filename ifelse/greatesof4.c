#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    printf("Enter the fourth number:");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("a is greatest");
    }
    if(b>a && b>c && b>d){
        printf("b is greatest");
    }
    if(c>a && c>b && c>d){
        printf("c is greatest");
    }
    if(d>a && d>c && d>b){
        printf("d is greatest");
    }
}


