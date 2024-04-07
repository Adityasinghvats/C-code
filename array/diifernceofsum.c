#include<stdio.h>
int main(){
    int i,evensum =0,oddsum = 0,diff;
    int arr[10] = {1,2,3,4,5,6,7,8,9};
    for(i=0;i<5;i++){
         if(i%2==0){
            evensum+=arr[i];
         }else{
            oddsum+=arr[i];
         }
    };
    if(evensum>oddsum){
        diff = evensum - oddsum;
    }else{
        diff = oddsum - evensum;
    }
    printf("%d",diff);
    return 0;
}