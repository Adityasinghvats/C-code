#include<stdio.h>
int main(){
    int a[3][2] = {{1,2},{3,4},{5,6}};
    int b[2][4] = {{1,2,3,4},{5,6,7,8}};
    int prod[3][4];
    int cr = 2;
    for(int i = 0;i<3;i++){
            for(int j=0;j<4;j++){
                // i th row of a and j th coulmn of b
                // (a[i][0],a[i][1],a[i][2]...)*(b[0][j],b[1][j],b[2][j].....)
                prod[i][j] = 0;
               for(int k = 0;k<cr;k++){
                prod[i][j] += a[i][k]*b[k][j];
               }
            }
        }
        // product
        // 11 14 17 20
        // 23 30 37 44
        // 35 46 57 68
        for(int i = 0;i<3;i++){
            for(int j=0;j<4;j++){
               printf("%d ",prod[i][j]);
            }printf("\n");
        }
    return 0;
}