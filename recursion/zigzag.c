#include<stdio.h>
int zigzag(int a){
   if(a==0) return;
   printf("%d ",a);
   zigzag(a-1);
   printf("%d ",a);
   zigzag(a-1);
   printf("%d ",a);
   return;
}
int main(){
    int n;
    printf("Enter base:");
    scanf("%d",&n);
    zigzag(n);
    }