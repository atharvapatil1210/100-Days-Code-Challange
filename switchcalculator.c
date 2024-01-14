//simple Simple Calculator using switch Statement
#include<stdio.h>
void main(){
      int a , b , choice;
      printf("\nEnter Two Numbers : ");
      scanf("%d%d",&a,&b);
      printf("\nChoose any Operators ");
      printf("\n1.Addition ");
      printf("\n2.Subtraction");
      printf("\n3.Multiplication");
      printf("\n4.Division");
      printf("\n5.Modolus");
      printf("\nChoose Any operator : ");
      scanf("%d",&choice);
      switch(choice){
            case 1 : printf("The value of Addition is %d",a+b);
                     break;
            case 2 : printf("The value of Subtraction is %d",a-b);
                        break;
            case 3 : printf("The value of Multiplication is %d",a*b);
                        break;
            case 4 : printf("The value of Division is %d",a/b);
                     break;
            case 5 : printf("The value of Modolous is %d",a%b);
                        break;
            Default : printf("\nPlease choose correct operator");
      }
}