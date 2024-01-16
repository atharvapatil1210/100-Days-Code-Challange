/* the days of the week can be defined as an enumeration and can be used anywhere in the program.*/
#include<stdio.h>
      enum week {Sunday , Monday , Tuesday , Wednesday , Thursday ,Friday , Saturday};

      void main(){
            enum week day ;
            day = Friday;
            printf("%d",day);
      }
