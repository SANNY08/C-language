int add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
void main()
{
    int x,y,p;
    printf("Enter Two number :");
    scanf("%d%d",&x,&y);
    p=add(x,y);
    printf("Sum is %d",p);
 getch();
}
