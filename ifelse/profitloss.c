#include<stdio.h>
int main(){
    int sp,cp;
    printf("Enter the selling price:$");scanf("%d",&sp);
    printf("Enter the cost price:$");scanf("%d",&cp);
    if((sp-cp)<0){
        printf("Loss was made:");
    }if(sp==cp){
        printf("No profit,No loss");
    }
    else{
        printf("Profit was made:");
    }printf("%d$",(sp-cp));
}