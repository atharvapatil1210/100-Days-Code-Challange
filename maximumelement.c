//Finding the maximum element in arrays 
#include<stdio.h>
void main(){
      float arr[5]={112.56,34.55,56.56,34,34};
      float max = arr[0];
      for(int i=1;i<=4;i++){
           if(max<arr[i]){
                  max=arr[i];
           }
      }
      printf("%f",max);
}