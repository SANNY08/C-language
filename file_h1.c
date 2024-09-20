#include<stdio.h>
#include<conio.h>
void main()
{
  FILE *fp;
  fp=fopen("sanny.txt","w");
    fprintf(fp,"Ram Shyam");
    fclose(fp);
getch();
}
