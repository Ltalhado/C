#include <stdio.h>


int main(){

    int i = 10; // value 

    // &i refers to the address of int i and its values

    int *p = &i; // Pointer is look at address of i

    printf("Looking value of the pointer : %d \n ", *p);



return 0 ;
}
