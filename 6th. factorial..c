#include<stdio.h>

void main(){
     int num, i;
     long factorial = 1;
     
     printf(" Enter a number:");
     scanf("%d",&num);
      
      for(i = 1; i <= num; i++){
              factorial *= i;
          
      }
      printf("factorial of %d is %d\n", num, factorial);  
      
}