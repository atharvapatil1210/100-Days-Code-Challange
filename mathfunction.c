#include<stdio.h>
#include<math.h>
void main(){
      int x , y, z ;
      printf("\nEnter x and y : ");
      scanf("%d%d",&x,&y);
      z = pow(x,y);
      printf("\n%d raised to power %d is %d",x,y,z);
}