//Program of sum of two integers using pointers
#include<stdio.h>

void main(){
    int a , b , *p, *q, sum ;
    printf("\nEnter a two integers : ");
    scanf("%d%d",&a,&b);
    p = &a ;
    q = &b;
    sum = *p+*q;
    printf("\nThe sum of two number : %d",sum);
}
