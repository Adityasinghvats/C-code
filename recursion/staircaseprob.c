#include<stdio.h>
// for taling 1 step and 2 steps
// int stair(int n){
//     if(n==1 || n==2) return n;
//     int totalWays = stair(n-1)+stair(n-2);
//     return totalWays;
// }
// int main(){
//     int n;
//     printf("Enter the term:");
//     scanf("%d",&n);
//     int ways = stair(n);
//     printf("No of ways is %d",ways);
//     }
int stair(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 4;
    int totalWays = stair(n-1)+stair(n-2)+stair(n-3);
//either man can take 1 step, 2 steps or 3 steps, total ways to reach the top has to be derived.
    return totalWays;
}
int main(){
    int n;
    printf("Enter the term:");
    scanf("%d",&n);
    int ways = stair(n);
    printf("No of ways is %d",ways);
    }    