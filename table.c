#include<stdio.h>
void main(){
      int num , i = 1 ;
      printf("Enter a number : ");
      scanf("%d",&num);
      while(i <= 10 ){
            printf("\n%d * %d = %d ",num,i,num*i);
            i++;
      }
}