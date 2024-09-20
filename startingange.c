void main()
{
int sr,er,i,a;
    prrintf("Enter starting range :");
    scanf("%d",&sr);
    printf("Enter ending range :");
    scanf("%d",er);
    for(a=sr;a<er;a++)
    {
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                break;
            }
        }
        if(i==a)
        {
            printf("%d  ",a);
        }
    }
    getch();
}
