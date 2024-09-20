//a program in C to swap two numbers using a function.
void main()
{
    int a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    printf("Before swap :n1=%d,n2=%d",a,b);
    swap(a,b);
    getch();
}
void swap(int x,int y)
{
    int temp=0;
    temp=x;
    x=y;
    y=temp;
    printf("\nAfter Swap n1=%d,n2=%d :",x,y);
}
