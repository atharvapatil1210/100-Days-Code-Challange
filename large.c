#include<stdio.h>
void main(){
      int a , b , big ;
      printf("\n Enter a and b : ");
      scanf("%d%d",&a,&b);
      big = (a>b)?a:b;
      printf("Largest number is %d",big);
}