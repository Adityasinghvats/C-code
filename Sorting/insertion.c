#include<stdio.h>
int main(){
    int arr[5]={5,4,3,2,1};
    for(int i=1;i<5;i++){
        int j = i;
        while (j>=0 && arr[j]<arr[j-1])
        {
            int swap = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = swap;
            j--;
        }
        
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
}