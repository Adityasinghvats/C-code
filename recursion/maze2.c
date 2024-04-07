#include<stdio.h>
int maze(int n, int m){
    int rightWays = 0;
    int downWays = 0;
    if(n==1 && m==1) return 1;
    if(n==1){
        rightWays += maze(n,m-1);
    }
    if(m==1){
        downWays += maze(n-1,m);
    }
    if(n>1 && m>1){
       rightWays += maze(n,m-1);
       downWays += maze(n-1,m); 
    }
    int totalWays = rightWays + downWays; 
    return totalWays;
}
int main(){
    int n;
    printf("Enter the no. of rows");
    scanf("%d",&n);
    int m;
    printf("Enter the no. of column");
    scanf("%d",&m);
    int a = maze(n,m);
    printf("%d",a);
    return 0;
    }