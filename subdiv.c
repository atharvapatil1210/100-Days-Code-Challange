#include<stdio.h>
float div(float a , float b ){
      float d;
      d = a / b;
      return d;

}
void main(){
     int a,b,z;
     printf("\nEnter a value of two interger : ");
     scanf("%d%d",&a,&b);
     z = div(a,b);
     printf("\nDivision = %d",z);
}