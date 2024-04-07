#include<stdio.h>
int main(){
    int target = 8;
    int i=0;
    int j=7;/*n-1*/
    int arr[8]={1,2,3,4,6,8,9,10};
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("%d %d",arr[i],arr[j]);
            break;
        }
       else if(arr[i]+arr[j]>target){
            j--;
        }
        else if(arr[i]+arr[j]<target){
            i++;
        }
    }
    return 0;
}