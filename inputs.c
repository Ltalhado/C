#include <stdio.h>



int main(void){

    int i =0;
    int *j = &i;

   // scanf_s is a safer way to read a value from the user.
//    printf("Enter your value: ");
//    scanf_s("Enter your value: %d", j);
   
    // Standard Way to read a value from the user.
   printf("Enter your value: ");
   scanf("Enter your value: %d", j);
    // Standard way to print the value of a value to the user.
   printf("The value of j is : %d\n", *j );
   // Standard way to print the address of a value to the user.
    printf("The address value of j is : %p", (void *)j );

    return 0; 
}
