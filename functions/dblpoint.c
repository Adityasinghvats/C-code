#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a;
   int** y = &x;
   int*** z = &y;
    printf("%p\n",&x); 
    printf("%p\n",y);
    printf("%d\n",*x); 
    printf("%d\n",**y);
    printf("%d",***z);

    return 0;
}