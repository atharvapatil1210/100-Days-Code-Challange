#include<Stdio.h>
void main(){
      char i;
      printf("Alphabet (A to Z ) , (a to z ) :- \n");
      for(i=65;i<=90;i++){
            printf("%c\t ",i);
      }
      for(i=97;i<=122;i++){
            printf("\t%c\t",i);
      }
}