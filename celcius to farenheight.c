#include<stdio.h>
#include<conio.h>
void main()
{
    float celcius,faren;
    printf("Enter celcius :");
    scanf("%f",&celcius);
    faren=(celcius*9/5)+32;
    printf("Celcius to farenheight :%f",faren);
    getch();
}
