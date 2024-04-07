#include<stdio.h>
int main(){
    char str[20] = "Physics Wallah";
    str[0]='M';int i = 0;
while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
}