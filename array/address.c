#include<stdio.h>
int main(){
    // adress nikalne k liye
    // int arr[5]={4,7,6,8,9};
    // for(int i=0;i<=4;i++){
    //     printf("%p\n",&arr[i]);
    // }
    // question 
    int arr[50],i;
    for(i=0;i<=49;i++){
        arr[i]=i;
        printf("\n%d",arr[i]);
    }
}