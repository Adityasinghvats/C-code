#include<stdio.h>
int min(int m,int n){
    if(m>n) return m;
    else return n;
}
int gcd(int x,int y){
    int hcf,i;
    // for(i = 1;i<=min(x,y);i++)
    for(i=min(x,y);i>=1;i--){
        if(x%i==0 && y%i==0){
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main(){
    int a,b,hcf;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    hcf = gcd(a,b);
    printf("The gcd/hcf of %d and %d is : %d",a,b,hcf);
    return 0;
}