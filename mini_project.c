#include<stdio.h>
#include<conio.h>
int menu();
void bus();
void cycle();
void riksha();
void bike();
void car();
void delete();
void showdata();
int nob=0,nocy=0,nor=0,nobi=0,noc=0,count=0,amount=0;
void main()
{
    while(1)
    {
    //clrscr();
    switch(menu())
   {
   case 1:
      bus();
      break;
    case 2:
      cycle();
      break;
    case 3:
      riksha();
      break;
    case 4:
      bike();
      break;
    case 5:
      car();
      break;
    case 6:
      showdata();
      break;
    case 7:
      delete();
      break;
    case 8:
        exit(0);
    default :
    printf("Invalid Choice !");
  }

    getch();
     }
}

int menu()
{
    int ch;
    printf("\n***********- PARKING -***********\n");
    printf("\n|!|Select Your Vehicle|!|\n");
    printf("\n1. Enter Bus (Rs.100):");
    printf("\n2. Enter Cycle (Rs.10):");
    printf("\n3. Enter Riksha (Rs.10):");
    printf("\n4. Enter Bike (Rs.50):");
    printf("\n5. Enter  Car (Rs.100):");
    printf("\n6. Enter Status :");
    printf("\n7. Enter Delete :");
    printf("\n8. Exit:");
    printf("\n\n Enter Your Choice :");
    scanf("%d",&ch);
    return(ch);
}
void delete()
{
    nob=0;
    nocy=0;
    nor=0;
    nobi=0;
    noc=0;
    amount=0;
    count=0;
}
void showdata()
{
    printf("\n Number of Bus %d :",nob);
    printf("\n Number of Cycle %d :",nocy);
    printf("\n Number of Riksha %d :",nor);
    printf("\n Number of Bike %d :",nobi);
    printf("\n Number of Car %d :",noc);
    printf("\n Total number of vehicle %d :",count);
    printf("\n Total gain amount %d :",amount);
}
void bus()
{
    printf("\nEntry Sucessful");
    printf("\n\n*Click any key to Entry Another Vehicle\n ");
  nob++;
  amount=amount+100;
  count++;
}
void cycle()
{

  printf("\n  Entry Sucessful");
  printf("\n\n*Click any key to Entry Another Vehicle\n ");
  nocy++;
  amount=amount+10;
    count++;

}
void riksha()
{
     printf("\n  Entry Sucessful");
     printf("\n\n*Click any key to Entry Another Vehicle\n ");
    nor++;
    amount=amount+10;
      count++;

}
void bike()
{
     printf("\n  Entry Sucessful");
     printf("\n\n*Click any key to Entry Another Vehicle\n ");
    nobi++;
    amount=amount+50;
      count++;

}
void car()
{
     printf("\n  Entry Sucessful");
     printf("\n\n*Click any key to Entry Another Vehicle\n ");
    noc++;
    amount=amount+100;
      count++;

}
