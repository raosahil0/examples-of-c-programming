#include<stdio.h>
#include<conio.h>
viod main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(num<0)
    printf("number is positive");
    else
    {
        if(num=0)
        printf("number is zero");
        else
        printf("number is negative");
        
    }
    getch();
}