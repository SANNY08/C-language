 //a program in C to show the simple structure of a function.
void main()
{
 int x,y;
 printf("Enter two number :");
 scanf("%d%d",&x,&y);
 sum(x,y);
}
void sum(int a,int b)
{
    int c;
    c=a+b;
    printf("Total is :%d",c);
}
