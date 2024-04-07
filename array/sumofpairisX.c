#include<stdio.h>
int main(){
    int i,j,count = 0,x = 12;
    int arr[8] = {1,2,3,4,5,6,7,8};
    for(i=0;i<8;i++){
        for(j=i+1;j<8;j++){
            if(arr[i]+arr[j]==x){
                count++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
    }
    }printf("%d",count);
    return 0;
}