//multiplication of first n natural numbers 
#include<stdio.h>
void main(){
    int n ;
    int mul =1;
    printf("Enter a no of natural number : ");
    scanf("%d",&n);
    for (int i = 1; i <= n ; i++ ){
       mul = mul * i;
    }
    printf("%d",mul);
}
