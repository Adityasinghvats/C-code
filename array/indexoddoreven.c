#include<stdio.h>
int main(){
    int i;
    int arr[5] = {1,2,3,4,5};
   
    for(i=0;i<5;i++){
         if(i%2==0) arr[i]+=10;
        // arr[i]=arr[i]+10;
    else arr[i]*=2;
        // arr[i]= arr[i]*2;
    printf("%d\n",arr[i]);
    }
    return 0;
}