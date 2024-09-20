void main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    sqr(n);
    getch();
}
void sqr(x)
{
    int c;
    c=x*x;
    printf("Square of %d is :%d",x,c);
}
