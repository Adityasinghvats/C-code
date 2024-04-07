#include<stdio.h>
#include<string.h>
typedef int* pointer;
int main(){
    int x = 4;
    int y = 5;
    pointer a = &x,b= &y;
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}