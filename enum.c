#include<stdio.h> 
#include<conio.h> 
void main() 
{ 
int j; 
enum countries {india=1,uk,usa};
printf("Enter the value for j :");
scanf("%d",&j); 
switch(j) 
{ 
case india: 
printf("\n asia"); 
break; 
case uk: 
printf("\n europe"); 
break; 
case usa: 
printf("\n north america"); 
break; 
} 
getch(); 
}