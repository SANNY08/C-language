void main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    eo(n);
    getch();
}
void eo(int x)
{
  if (x%2==0)
  {
      printf("The entered number is even. ");
  }
  else
  {
      printf("The entered number is odd.");
  }
}
