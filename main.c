#include <stdio.h>
#include <stdlib.h>

int main()
{
int i;
 for (i=1 ; i<=100 ;i++ ){
    if ( i % 3 == 0){
        printf(" hello ");
    }
   else if( i % 5 == 0){
        printf(" World ");

    }
   else if ( i % 7 == 0){
    printf(" you ");
    }
    else {
        printf(" %d ",i);
         }

 }




    return 0;
}
