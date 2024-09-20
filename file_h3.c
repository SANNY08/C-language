#include<stdio.h>
void main()
{
    FILE *fp;
    char a[20];
    fp=fopen("abb.txt","r");//when we use w(write),a(append)mode the file will be automaticaly created
    if(fp==NULL)
    {
        printf("Can't open file ");
    }
    else
    {
        fscanf(fp,"%s",a);
        printf("%s",a);
        fclose(fp);
    }
    getch();
}
