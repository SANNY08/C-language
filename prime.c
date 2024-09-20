void main()
{
    int a,i;
    printf("Enter a number :");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            printf("Number is not Prime ");
            break;
        }
    }
    if(i==a)
    {
        printf("Number is Prime");
    }

    getch();
}
