#include<stdio.h>
#include<conio.h>
void main()
{

  int i;
   /* for(i=0;i<3;i++)
    {
        if(i==1)
            continue;
        else
            printf("A");
        printf("B");
    }
    for(i=1;i<10;i++)
    {
        if(i%3==0|| i%5==0)
        {
            printf("%d",i);
        }
    }

    getch();*/
    for(i=0;i<10;i++)
    {
        if(i==5)
        {
            printf("hello");
        }
        else if(i==6)
        {
            printf("Hii");
        }
        else if(i==7)
        {
          break;
        }
        else if(i==8)
        {
            printf("bye");
        }
    }
    getch();
}
