void main()
{
    int x,y,i;
    printf("Enter 1st number :");
    scanf("%d",&x);
    printf("Enter 2nd number :");
    scanf("%d",&y);
    for(i=1;i<=x*y;i++)
    {
        if(i%x==0 && i%y==0)
        {
            printf("LCM is :%d",i);
            break;
        }
    }

    getch();
}
