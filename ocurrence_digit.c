#include<Stdio.h>
void main(){
      int num , i , n , k , num1 ; 
      printf("Enter any number ::");
      scanf("%d",&num);
      n=num;
      i = 0 ;
      printf("\nEnter the digit :: ");
      scanf("%d",&num1);

      while(n!=0){
            k=n%10;
            n=n/10;
            if(k==num1){
                  i++;
            }
      }
      printf("\nThe occurrences of %d is %d times",num1,i);
}