void main()
{
    int z;
 printf("Enter a number :");
 scanf("%d",&z);
 cube(z);
 getch();

}
void cube(x)
{
    int y;
 y=x*x*x;
 printf("Cube of %d is %d:",x,y);
}
