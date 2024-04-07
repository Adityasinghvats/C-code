#include<stdio.h>
#include<limits.h>
// int main(){
//     int max = -1/*sabse chota no store kr rhe hain*/,i = 0;
//     int arr[5] = {6,94,5,2,8};
//     for(i = 0;i<5;i++){
//          if(max<arr[i]){

//     max = arr[i];
//     }
//     }
//     printf("%d",max);

//     return 0;
// }
// int main(){
//     int i;
//     int arr[5] = {-6,-94,-5,-2,-8};
//     // int max = arr[0];/*To not get output as -1*/
//     int max = INT_MIN;
//     for(i = 1;i<5;i++){
//          if(max<arr[i]){

//     max = arr[i];
//     }
//     }
//     printf("%d",max);

//     return 0;
// }
int main(){
    int i;
    int arr[5] = {6,94,5,2,8};
    // int max = arr[0];/*To not get output as -1*/
    int min = arr[0];
    for(i = 1;i<5;i++){
         if(min>arr[i]){

    min = arr[i];
    }
    }
    printf("%d",min);

    return 0;
}
