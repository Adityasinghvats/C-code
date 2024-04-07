// #include<stdio.h>
// int main(){
//     char str[]="Hello , College Wallah is best youtube channel for cosing\0";
//     int i = 0;
//     while(str[i]!='\0'){
//         printf("%c",str[i]);
//         i++;
//     }
//     return 0;
// }
// in this method we do not need to count the numbers of charaters 
// eg : hello world has 11 chaters we would have put i < 12 to print it
#include<stdio.h>
int main(){
    char str[]={'h','e','l','l','o','\0'};
    int i = 0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    return 0;}