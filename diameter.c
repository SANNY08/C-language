/*input radius of circle from user and
find Diameter,Circumference and area
 of the giving circle using fnction*/
void main()
{
    int r;
    printf("Enter radius :");
    scanf("%d",&r);
    dim(r);
    circum(r);
    area(r);
    getch();
}
void dim(x)    //Diamerter
{
  float d;
  d=2*x;
  printf("Diameter is : %f",d);
}
void circum(y)   //Circumference
{
    float c;
    c=2*3.14*y;
    printf("\nCircumference is : %f",c);
}
void area(z)   //Area of circle
{
    float a;
    a=3.14*z*z;
    printf("\nArea of Circle is : %f",a);
}
