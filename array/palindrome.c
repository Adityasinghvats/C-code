#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int a[]){
    int i =0;
    int j =6;
    for(int i=0,j=6; i<=j; i++, j--){
        a[i] = a[j];
        if(a[i]=a[j]) return true;
        else return false;
    }
}
int main(){
    int arr[7] = {1,2,3,4,3,2,1};
    isPalindrome(arr);

}