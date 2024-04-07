#include<stdio.h>
int main(){
    int sum1 = 0,sumall;
    int arr[10] = {1,2,3,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        sum1 += arr[i];
    }
    sumall = (10*(10+1))/2;
    int missingnumb = sumall-sum1;
    printf("%d",missingnumb);
    return 0;
}