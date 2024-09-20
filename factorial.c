void main()
{
    int x,i,mul=1;
    printf("Enter a number :");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        mul=mul*i;
    }
    printf("Factorial is :%d",mul);
    getch();
}
