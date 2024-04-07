#include<stdio.h>
#include<string.h>
// string length 
// void main()
// {
//  char str1[20] = "BeginnersBook";
//  printf("Length of string str1: %d", strlen(str1));
// }
// string compare
// void main()
// {
//  char s1[20] = "Hello";
//  char s2[20] = "Hello World!";
//  if (strcmp(s1, s2) ==0)
//  {
//  printf("string 1 and string 2 are equal");
//  }else
//  {
//  printf("string 1 and 2 are different");
//  }
//  }
void main() 
 {
 char s1[20] = "BeginnersBook";
 char s2[20] = "BeginnersBook.COM";
 /* below it is comparing first 8 characters of s1 and s2*/
 if (strncmp(s1, s2, 8) ==0)
 {
 printf("string 1 and string 2 are equal");
 }else
 {
 printf("string 1 and 2 are different");
 }
}