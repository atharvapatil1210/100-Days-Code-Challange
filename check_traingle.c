#include<stdio.h>
int main(){
    int a ;
    printf("\n Enter 1st side of the traingle : ");
    scanf("%d",&a);
    int b;
    printf("\nEnter 2nd side of the traingle : ");
    scanf("%d",&b);
    int c;
    printf("\nEnter 3rd side of the traingle : ");
    scanf("%d",&c);
    if((a+b)>c && (a+c)>b && (b+c)>a){
        printf("It is valid Traingle ");
    }
    else
        printf("Invalid traingle ");
    
}
