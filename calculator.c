#include<stdio.h>
int main(){
    int a,b,result;
    char oper;
      printf("Enter an Operator(+,-,*,/) :");
    scanf("%c",&oper);
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
  
    switch(oper)
    {
        case '+': {
            result=a+b;
            printf("Sum of two number is :%d",result);
            break;
        }
        case '-':
        {
            result =a-b;
            printf("Sub of two number is :%d",result);
              break;
        }
        case '*':
        {
            result =a*b;
            printf("Mul of two number is :%d",result);
              break; 
        }
         case '/': if(b !=0)
        {
            result =a/b;
            printf("Divide of two number is :%d",result);
              break; 
        } else {
            printf("Wrong : Divided by zero not allowed !");
        }
          break; 
        default :printf("Wrong input operator!");
         break;
    }
    return 0;
}