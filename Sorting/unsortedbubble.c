#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[5] = {3,2,5,1,4};
    int n = 5;
    printf("Unsorted:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n-1;i++){
        bool flag = true;/*Array is sorted*/
        for(int j=0;j<n-1-i;j++){
                if(arr[j]<arr[j+1]){
                    int swap = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=swap;
                    flag = false;
                }
        } if(flag==true) break;
    }
    printf("\n");
    printf("Reverse Sorted:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}