#include<stdio.h>
int main(){
    int m,n;
    printf("Enter the no. of rows : ");
    scanf("%d",&m);
    printf("Enter the no. of columns : ");
    scanf("%d",&n);
    int a[m][n];
    // for(int i =0;i<m;i++){
    //         for(int j=0;j<n;j++){
    //         printf("Enter element with index (%d,%d): ",i,j);
    //           scanf("%d",&a[i][j]);  
    //         }
    //     }
   
    int totalelements = m*n;
    int count = 0;
    int minrow = 0,maxrow = m-1 ,mincol = 0,maxcol = n-1;
    while(count<totalelements){
        // print the minimum row
        for(int j = mincol;j<=maxcol && count<totalelements;j++){
            printf("Enter the element with index (%d,%d)",minrow,j);
            scanf("%d",&a[minrow][j]);
            count++;  
        }
        minrow++;
        // print the maximum column
        for(int i = minrow;i<=maxrow && count<totalelements;i++){
            printf("Enter the element with index (%d,%d)",i,maxcol);
            scanf("%d",&a[i][maxcol]);
            count++;
        }
        maxcol--;
        // print the maximum row in reverse order
        for(int j = maxcol; j>=mincol && count<totalelements; j--){
            printf("Enter the element with index (%d,%d)",maxrow,j);
            scanf("%d",&a[maxrow][j]);
            count++;
        }
        maxrow--;
        // print the minimum column in reverse order
        for(int i = maxrow ; i>= minrow && count<totalelements; i--){
            printf("Enter the element with index (%d,%d)",i,mincol);
            scanf("%d",&a[i][mincol]);
            count++;
        }
        mincol++;
    } 
     for(int i =0;i<m;i++){
            for(int j=0;j<n;j++){
              printf("%d ",a[i][j]);  
            }printf("\n");
        } 
    return 0;
}