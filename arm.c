void main()
{
    int a,x,b,s=0;
    printf("Enter a number :");
    scanf("%d",&a);
    x=a;
    while(a!=0)
    {
        b=a%10;
        s=s+(b*b*b);
        a=a/10;
    }
    if(x==s)
    {
    printf("It is Armstrong Number");
    }
    else
    {
    printf("It is not Armstrong Number");
    }
    getch();
}
