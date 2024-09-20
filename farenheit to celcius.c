#include<stdio.h>
#include<conio.h>
void main()
{
    float faren,celcius;
    printf("Enter Farenheit :");
    scanf("%f",&faren);
    celcius=(faren-32)*5/9;
    printf(" Farenheit to celcius %f",celcius);
    getch();
}
