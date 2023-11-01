#include<stdio.h>
#include<conio.h>
void main()
{
char op;
double first,second;
printf("enter an operator(+,-,*,/)");
scanf("%c",&op); 
printf("enter two operator :");
scanf("%lf %lf",fist,second);
switch(op){
    case '+':
    printf("%.1lf+%.1lf=%.1lf",first,second,first+second);
    break;
    case '-':
    printf("%.1lf-%.1lf=%.1lf",first,second,first-second);
    break;
    case '*':
    printf("%.1lf*%.1lf=%.1lf",first,second,first*second);
    break;
    case '/':
    printf("%.1lf/%.1lf=%.1lf",first,second,first/second);
    break;
    default:
    printf("Error! operator is not correct");
}
getch(); 
 
}