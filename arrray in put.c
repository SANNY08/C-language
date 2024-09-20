void main()
{
    int arr[5];
    int i,sum=0;
    printf("Enter five number :");
    for(i=0;i<5;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("ENTERD ARRAY ARE :");
    for(i=0;i<5;i++)
    {
        printf(" %d",arr[i]);
        sum=sum+arr[i];
    }
    printf("\nTotal Sum is : %d",sum);
    getch();
}
