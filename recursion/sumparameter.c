// #include<stdio.h>
// // using parameter
// void sum(int n, int s){
//     if(n==0){
//         printf("%d",s);
//         return;
//     }
//     sum(n-1,s+n);
//     return;
// }
// int main(){
//     int n;
//     printf("Enter the number:");
//     scanf("%d",&n);
//     sum(n,0);
//     }
// return type use krke
#include<stdio.h>
int sum(int n){
    if(n==0) return n;
    int recAns = n + sum(n-1);
    return recAns;
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int sumOf = sum(n);
    printf("%d",sumOf);


    }