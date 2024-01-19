#include<stdio.h>
int main(){
    int n;
    int product = 1 ;
    printf("\nEnter a number n : ");
    scanf("%d",&n);
    for(int i = 1 ; i<=n ; i++){
        product = product * i;
        printf("\n%d of fibonnaci series is  %d",i,product);
    }
    return 0;
}