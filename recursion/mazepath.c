#include<stdio.h>
int maze(int sr, int sc, int er, int ec){/*sr/sc- starting row column , er/ec- emdimg row column*/
    int rightWays = 0;
    int downWays = 0;
    if(sr==er && sc==ec) return 1;
    if(sc==ec){
        downWays += maze (sr+1,sc,er,ec);
    }
    if(sr==er){
        rightWays += maze(sr,sc+1,er,ec);
    }
    if(sr<1 && sc<1){
        rightWays += maze(sr,sc+1,er,ec);
        downWays += maze (sr+1,sc,er,ec);
    }
    int totalWays = rightWays + downWays; 
    return totalWays;
}
int main(){
    int n,m;
    printf("Enter the no. of rows");
    scanf("%d",&n);
    printf("Enter the no. of column");
    scanf("%d",&m);
    int a=maze(1,1,n,m);
    printf("%d",a);
    return 0;
    } 