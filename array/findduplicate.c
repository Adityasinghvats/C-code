#include<stdio.h>
int main(){
    int i,j,count = 1,rptnum;
    int arr[8]={1,2,3,4,7,6,7};
    for(i=0;i<=7;i++){
        for(j=i+1;j<=7;j++){
              if(arr[i]==arr[j]){
                rptnum = arr[i];
                count++;
                break;
              }
        }
    }printf("%d is reapeated %d times",rptnum,count);
    return 0;
}