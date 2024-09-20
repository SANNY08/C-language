#include<stdio.h>
void main()
{
    FILE *fp;
    char a[20];
    fp=fopen("abc.txt","r");
    fscanf(fp,"%s",a);
    printf("%s",a);
    fclose(fp);
    getch();
}
