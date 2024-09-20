void main()
{
int i,j;
for(i=0;i<4;i++)
{
for(j=0;j<7;j++)
{
if(j>=5-i && j<=3+i)
{
printf("*");
}
else
{
    printf(" ");
}
}
printf("\n");
}
getch();
}
