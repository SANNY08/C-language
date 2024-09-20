#include<stdio.h>
#include<conio.h>
void main()
{
    float a[9],s=0,per;
    int i;
    printf("Enter Marks :");
    for(i=0;i<5;i++)
    {
        scanf("%f",&a[i]);
        s=s+a[i];
    }
    printf("Total is : %f",s);
    per=(s/500)*100;
    printf("\n Percentage is: %f",per);
    getch();
}
