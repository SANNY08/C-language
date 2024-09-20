 //a program in C to check whether a number is a prime number or not using the function.
void main()
{
   int num;
   printf("Enter a number :");
   scanf("%d",&num);
   prime(num);
   getch();
}
void prime(int n)
{
   int i;
   for(i=2;i<n;i++)
   {
       if(n%i==0)
       {
           printf("Not Prime");
           break;
       }
   }
   if(i==n)
   {
       printf("Prime number ");
   }
}
