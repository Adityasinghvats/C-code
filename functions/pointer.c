#include<stdio.h>
int main(){
    int a = 25;
    int* x = &a;
    // A is changed
    *x = 17;
    // to get address
    printf("%p\n",&a);
    // to print number 
    printf("%d",*x); /*This is to print number*/

    return 0;
}