#include<stdio.h>
#include<conio.h>
void main()
{
int no;
clrscr();
printf("Enter any number(0 to 6):");
scanf("%d",&no);
if (no == 0)
{
printf("Sunday");
}
else if(no==1){
printf("Monday");
}
else if(no==2){
printf("Tuesday");
 }
else if(no==3) {
printf("Wednesday");
}
else if(no==4){
printf("Thursday");
}
else if(no==5){
printf("Friday");
}
else if(no==6){
printf("Saturday");
}
else{
printf("Wrong input !");
}
getch();
}