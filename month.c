#include<stdio.h>
void main(){
     int month , days ;
     printf("\n Enter days = ");
     scanf("%d",&days);

     month = days/30;
     days = days%30;

     printf("\n Month = %d and Days = %d ",month , days);
}