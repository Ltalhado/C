#include <stdio.h>


int main(){
    int array[ 10 ];

    for( int i = 0; i < 10; i++ ){
        array[i] = i;
    }
    // loop through the array
    for( int i = 0; i < 10; i++ ){
        printf("%d\n", array[i]);
    }




    return 0;
}