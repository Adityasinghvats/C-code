#include<stdio.h>
int main(){
    int i,j,k,count = 0,x = 12;
    int arr[8] = {1,2,3,4,5,6,7,8};
    for(i=0;i<8;i++){
        for(j=i+1;j<8;j++){
            for(k=j+1;k<8;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                count++;
                printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
            }
            }
            
    }
    }printf("%d",count);
    return 0;
}