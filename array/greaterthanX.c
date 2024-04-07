#include<stdio.h>
int main(){
    int x = 2,i,count = 0;
    int arr[5] = {4,6,2,7,4};
   
    for(i=0;i<5;i++){
         if(arr[i]>x) count++;}
         printf("%d numbers are greater than %d",count,x);
    
    return 0;
}