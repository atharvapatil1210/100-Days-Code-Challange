#include<stdio.h>
void main(){
      int p1_age , p2_age;
      printf("\nEnter first person age and second person age : ");
      scanf("%d%d",&p1_age,&p2_age);
      if (p1_age < 18 ){
            printf("\nNot eligible for vote ");
      }
      else{
            printf("\nEligible for vote");
      }
      if (p2_age < 18 ){
            printf("\nNot eligible for vote ");
      }
      else{
            printf("\nEligible for vote");
      }
}
