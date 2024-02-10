#include<stdio.h>
void main(){
      int cp , sp, amt;
      printf("\nEnter a Current price : ");
      scanf("%d",&cp);
      printf("\nEnter a selling price : ");
      scanf("%d",&sp);

      if ( cp > sp ){
            amt = cp - sp;
            printf("\nloss is %d",amt);
      }
      else{
           amt = sp - cp;
           printf("\nProfit is %d",amt);
      }
}
