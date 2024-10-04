#include<stdio.h>
int main(){
    int p,c,m;//p=physics,c=chemistry,m=math
    printf("Enter your physic marks :");
    scanf("%d",&p);
    printf("Enter your chemistry marks :");
     scanf("%d",&c);
    printf("Enter your math marks :");
     scanf("%d",&m);
if(m>=65 && p>=55 && c>=50){
    if(m<=180 && p<=180 && c<=180){
        if(m+p>=140){
            printf("You're eligible of Admission ");
        }else{
            printf("Sorry ! You're not eligible : Math and Physics < 140 \n");
        } 
    } else{
              printf("Sorry ! You're not eligible Math + physics + chemistry <=180 \n"); 
        }
}else{
              printf("Sorry ! You're not eligible : Indivisual subject creiteria \n"); 
        }
 return 0;
}