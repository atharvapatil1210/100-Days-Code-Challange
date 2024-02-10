#include<stdio.h>
void main(){
      int amt;
      int note500 , note100 , note50 , note10 , note5 , note1;

      note1 = note10 = note100 = note5 = note50 = note500 = 0 ;

      printf("\nEnter amount ");
      scanf("%d",&amt);

      if(amt >= 500 ){
            note500 = amt/500;
            amt -= note500 * 500;
      }
      if(amt >= 100 ){
            note100 = amt/100;
            amt -= note100 * 100;
      } 
      
      if(amt >= 50 ){
            note50 = amt/50;
            amt -= note50 * 50;
      }
      if(amt >= 10 ){
            note10 = amt/10;
            amt -= note10 * 10;
      } 
      if(amt >= 1){
            note1 = amt/1;
            amt -= note1 * 1;
      }
      printf("Total number of notes is ");
      printf("\n500 = %d\n",note500);
      printf("\n100 = %d\n",note100);
      printf("\n50 = %d\n",note50);
      printf("\n10 = %d\n",note10);
      printf("\n1 = %d\n",note1);
}
