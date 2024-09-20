#include<stdio.h>
void main()
{
    FILE *a;
    char b;
    a=fopen("sanny.txt","r");
    while(!feof(a))
    {
        b=fgetc(a);
        printf("%c",b);
    }
    //fscanf(a,"%s",b);
    //printf("%s",b);
    getch();
}
