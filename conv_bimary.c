 //a program in C to convert a decimal number to a binary number using the function.
void main()
{
  int x;
  printf("Enter any number to convert Binary :");
  scanf("%d",&x);
  binary(x);
}
void binary(int a)
{
    int bin=0,place=1,rem=0;
    while(a!=0)
    {
        rem=a%2;
        a=a/2;
        bin=bin+(rem*place);
        place=place*10;
    }
    printf("Binary number is :%d",bin);
getch();
}
