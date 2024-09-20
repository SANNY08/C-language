void add(x,y)
{
  int s=0;
  s=x+y;
  printf("Sum of two number is %d :",s);
}
void sub(int x,int y)
{
    int s=0;
    s=x-y;
    printf("\nSubtraction is %d :",s);
}
void main()
{
 int a,b;
 printf("Enter 1st number :");
 scanf("%d",&a);
 printf("Enter 2nd number :");
 scanf("%d",&b);
add(a,b);
sub(a,b);
}
