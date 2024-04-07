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
    chng(arr,2,6);
    for(int i=0;i<7;i++){
         printf("%d ",arr[i]);
        }

}