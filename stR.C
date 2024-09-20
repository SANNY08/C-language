#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j,k=0;
 char x='A';
 for(i=1;i<=9;i++)
 {
     i<=5?k++:k--;
     for(j=1;j<=5;j++)
     {
         if(j<=k)
         {
             printf("%c",x);
         }
         else
         {
             printf(" ");
         }
     }
     printf("\n");
 }
}
