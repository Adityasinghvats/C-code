// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[] = "Physics Wallah";
//     // printf("%s",str);instead of this we can use
//     puts("Welcome to");
//     puts(str);
//     return 0;
// }
#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    puts("Enter your name"); 
    // scanf("%s",str);
    // only the first word will be considered
    gets(str);
    // printf("Your input was %s",str);
    puts(str);
}