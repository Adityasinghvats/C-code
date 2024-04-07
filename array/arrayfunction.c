#include<stdio.h>
// using pass by value we can change in it but not in normal int
// void fun(int arr[]){
//     arr[0]=10;
// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     printf("%d\n",arr[0]);
//     fun(arr);
//     printf("%d",arr[0]);
//     return 0;
// }
// SWaping
void fun(int a[]){
    int b;
    b=a[0];
    a[0]=a[1];
    a[1]=b;
    return;
    
}
int main(){
    int arr[5] = {4,9};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d",arr[0],arr[1]);
    return 0;
}