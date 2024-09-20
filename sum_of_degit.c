void main()
{
    int a,x,b,s=0;
    printf("Enter a number :");
    scanf("%d",&a);
    x=a;
    while(a!=0)
    {
        b=a%10;
        s=s+b;
        a=a/10;
    }
   printf("Sum of degit %d",s);
    getch();
}
