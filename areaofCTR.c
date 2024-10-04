#include<stdio.h>
int main()
{
    int choice ;
    printf("Enter 1 for calculate area of circle: \nEnter 2 for calculate area of triangle: \nEnter 3 for calculate area of rectangle:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 :
        {
        float r;
        printf("Enter radius :");
        scanf("%f",&r);
        printf("Area of circle is :%f",(3.14*r*r));
        break ;
        }
        case 2 :
        {
            int w,h;
            printf("Enter wirth & hight :");
            scanf("%d%d",&w,&h);
            printf("Area of triangle = %d",(w*h)/2);
              break ;
        }
        case 3 :
        {
            int l,b;
            printf("ENter length & nbreath :");
            scanf("%d%d",&l,&b);
            printf("Area of rectangle is :%d",l*b);
              break ;
        }
        default : 
        printf("Wrong choice!");
    }
}