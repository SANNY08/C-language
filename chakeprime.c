void main()
{
    int a,i,sr,er,c=0;
    printf("Enter Starting range :");
    scanf("%d",&sr);
    printf("Enter End range :");
    scanf("%d",&er);
    for(a=sr;a<er;a++)
    {
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            break;
        }
    }
    if(i==a)
    {
        printf("%d  ",a);
        c++;
    }
   printf("Total number are : %d",c);
    getch();
}

