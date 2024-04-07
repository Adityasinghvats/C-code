#include<stdio.h> 
int main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
// if(n%3==0 || n%5==0){
//     if(n%15!=0){
//         printf("n is divisible by 3 or 5 but not 15");
//     }
//     else{
//         printf("n is divisible by 15");
//     }
// }
if((n%3==0 || n%5==0) && n%15!=0){
    printf("n is divisible by 3 or 5 but not 15");
}
else{
    printf("n is not divisible");
}
}
// nested if else type