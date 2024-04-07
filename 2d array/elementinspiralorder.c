#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the no. of rows : ");
    scanf("%d",&m);
    printf("Enter the no. of columns : ");
    scanf("%d",&n);
    int a[m][n];
    for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
            printf("Enter element with index (%d,%d): ",i,j);
              scanf("%d",&a[i][j]);  
            }
        }
    for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
              printf("%d ",a[i][j]);  
            }printf("\n");
        }
    int totalelements = m*n;
    int count = 0;
    int minrow = 0,maxrow = m-1 ,mincol = 0,maxcol = n-1;
    printf("The spiral order is:");
    while(count<totalelements){
        // print the minimum row
        for(int j = mincol;j<=maxcol && count<totalelements;j++){
            printf("%d-> ",a[minrow][j]);
            count++;  
        }
        minrow++;
        // print the maximum column
        for(int i = minrow;i<=maxrow && count<totalelement;i++){
            printf("%d-> ",a[i][maxcol]);
            count++;
        }
        maxcol--;
        // print the maximum row in reverse order
        for(int j = maxcol; j>=mincol && count<totalelement; j--){
            printf("%d-> ",a[maxrow][j]);
            count++;
        }
        maxrow--;
        // print the minimum column in reverse order
        for(int i = maxrow ; i>= minrow && count<totalelement; i--){
            printf("%d-> ",a[i][mincol]);
            count++;
        }
        mincol++;
    }
    printf("\nThe count is %d",count);  
    return 0;
}