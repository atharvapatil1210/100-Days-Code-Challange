//C Program to Display Factors of a Number
#include<stdio.h>
void main(){
      int num;
      printf("\nEnter a Positive Integer : ");
      scanf("%d",&num);
      for(int i = 1; i<num; i++){
            if(num%i==0){
                  printf(" %d ",i);
            }
      }
}