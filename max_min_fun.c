//How to find maximum and minimum of two or more numbers using functions in C programming.
void main()
{
  int x,y;
  prinft("Enter two number :");
  scanf("%d%d",&x,&y);
  max(x,y);

  getch();
}
void max(int a,int b)
{
    if (a>b)
    {
     printf("Max is %d",a);
    }
    else
    {
        printf("Min is %d",b);
    }

}
/*void min(int a,int b)
{
   if (a<b)
   {
        printf("Min is %d",b);
         }
}*/
