#include<stdio.h>
void main(){
      int a , b;
      printf("\nEnter a  and b : ");
      scanf("%d%d",&a,&b);
      printf("\nPrefix increment %d",++a);
      printf("\nPostfix increment %d",a++);
      printf("\nPrefix decrement %d",--a);
      printf("\nPostfix decrement %d",a--);
}