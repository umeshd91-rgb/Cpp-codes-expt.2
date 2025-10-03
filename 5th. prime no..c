#include<stdio.h>

void main(){
     int num, i, flag = 0 ;
     printf(" Enter a number:");
     scanf("%d",&num);
      
      for(i = 2; i <= num / 2; i++){
          
          if(num % i == 0){
              flag = 1;
              break;
          }
      }
      if(num > 1 && flag == 0)
      printf("%d is not a prime number\n", num);  
      
}