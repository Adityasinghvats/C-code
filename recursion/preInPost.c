#include<stdio.h>
int preInPost(int a){
   if(a==0) return;
   printf("Pre %d\n",a);
   preInPost(a-1);
   printf("In %d\n",a);
   preInPost(a-1);
   printf("Post %d\n",a);
   return;
}
int main(){
    int n;
    printf("Enter base:");
    scanf("%d",&n);
    preInPost(n);
    }