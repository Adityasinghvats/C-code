#include<stdio.h>
int main(){
    int m = 0,n = 0;
    int a[m][n];
    printf("Enter the no. of rows : ");
    scanf("%d",&m);
    printf("Enter the no. of columns : ");
    scanf("%d",&n);
    for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
              scanf("%d",a[i][j]);  
            }
        }
    int p = n , q = m;
    int brr[p][q];
     for(int i =0;i<p;i++){
            for(int j=0;j<q;j++){
                printf("%d",brr[i][j]);
            }
        }
    return 0;
}