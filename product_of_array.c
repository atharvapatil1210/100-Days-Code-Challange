//C programm to find product of arrays
// elements. 
#include <stdio.h> 

int product(int arr[], int n);

int main(){
      int arr[] = {1,2,3,4,5};
      int n = (sizeof(arr)/sizeof(arr[0]));
      printf("Product of array elements is %d",product(arr,n));
      return 0 ;
}
int product(int arr[], int n ){
      int result = 1;
      for(int i = 0 ; i < n ; i++)
            result = result * arr[i];
            return result;
}

