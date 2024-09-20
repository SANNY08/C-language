void main()
{
   prime();
   getch();
}
void prime()
{
    int  i,a;
    for(a=1;a<100;a++)
    {
         for(i=2;i<a;i++)
   {
       if(a%i==0)
       {
           //printf("Not Prime");
           break;
       }
   }
   if(i==a)
   {
       printf("%d ",a);
   }
    }
}
