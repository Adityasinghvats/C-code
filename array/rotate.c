#include<stdio.h>
void chng(int a[],int strt, int end){
    for(int i=strt,j=end; i<=j; i++, j--){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }return;
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int k = 3;/*No of steps*/
    // Step 1
    k = k%7;
    // step 2(arr,0,n-1)
    chng(arr,0,6);
    // step 3(arr,0,k-1)
    chng(arr,0,2);
    // step 4(arr,k,n-1)
    chng(arr,3,6);
    for(int i=0;i<7;i++){
         printf("%d ",arr[i]);
        }

}