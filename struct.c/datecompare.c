#include<stdio.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    }date;
    date a,b,c;
    a.day = 27;
    a.month = 10;
    a.year = 2003;
    b.day = 16;
    b.month = 6;
    b.year = 2004;
    c.day = a.day;
    bool type = true;
    // if(a.day!=b.day) type = false;
    // if(a.month!=b.month) type = false;
    // if(a.year!=b.year) type = false;
    if(a.day!=c.day) type = false;
    if(type==true) printf("The dates are same");
    else printf("The dates are different");  
    return 0;
}