#include<stdio.h>
void reverse(int a[]){
    for(int i=0,j=7; i<j; i++, j--){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    // int i = 0;
    // int j = 7;
    // while(i<j){
    //     int temp = a[i];
    //     a[i] = a[j];
    //     a[j] = temp;
    //     i++;
    //     j--;
    //                 }
                    return;

}
int main(){
    int i,j;
    int arr[8] = {1,2,3,4,5,6,7,8};
    // int brr[8];
    // for(i=0;i<8;i++){
    //     brr[i]=arr[7-i];
    // }
    // for(i=0;i<8;i++){
    //     printf("%d",brr[i]);
    //     }

    // return 0;
    // Without using extra array(use swap two numbers)
    reverse(arr);
    for(i=0;i<8;i++){
         printf("%d ",arr[i]);
        }
}