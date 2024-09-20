int add(int *p,int *q,int *r)
{
    *r=(*p)+(*q);
}
void main()
{
    int x,y,z;
    printf("Enter two number :");
    scanf("%d%d",&x,&y);
    add(&x,&y,&z);
    printf("Sum is :%d",z);
    getch();
}
