#include <stdio.h>
int main()
{
    int no1,year,Age;
    char sname[50];
    printf("Enter your name = ");
    scanf("%s",&sname);
    printf("Enter birth year = ");
    scanf("%d",&no1);
    year=2022;
    Age=(year-no1);
    printf("Hi %s, Your Age Is %d.",sname,Age);


}
