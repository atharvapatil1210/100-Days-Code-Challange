#include<stdio.h>
void main(){
    int arr [5] = {10,20,30,40,50};
    int sum = 0 ;
    for(int i = 1 ; i<=4 ; i++){
      sum = sum + arr[i];
    }
    printf("%d",sum);
}
