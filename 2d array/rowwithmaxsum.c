#include<stdio.h>
int main(){
        int arr[2][2] = {{1,2},{3,4}};
        int sum1 = 0,sum2 = 0;
        for(int i =0;i<1;i++){
            for(int j=0;j<2;j++){
                sum1 += arr[i][j];
            }
        }
        for(int i =1;i<2;i++){
            for(int j=0;j<2;j++){
                sum2 += arr[i][j];
            }
        }
        if(sum1>sum2){
            printf("Row 1 has max sum. :%d",sum1);
        }else{
            printf("Row 2 has max sum. : %d",sum2);
        }
        
        
        }