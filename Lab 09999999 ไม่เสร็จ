#include <stdio.h>

int main () {
    int N ; // จำนวน Array
    int number[N] ;
    int i ; 
    int array ;
    int check ;
    int n ;
    printf( "Enter N : " ) ;
    scanf( "%d" , &N ) ;

    for ( i = 0 ; i < N ; i++ ) {
       printf( "Enter value [%d] : " , i ) ;
       scanf( "%d" , &number[i] ) ;
    }//end for
    printf( "Index: " ) ;

    for ( i = 0 ; i < N ; i++ ) {
        printf( " %d " , i ) ;
    }//end for
    printf( "\nArray: " ) ;
    
    for ( i = 0 ; i < N ; i++ ) {
        if ( number[i] <= 1 ) {
            printf( " # " ) ;
        } else if ( number[i] == 2 ) {
            printf( " %d " , number[i] ) ;
        } else if ( number[i]%2 == 0 ) {
            printf( " # " ) ;
        } else if ( number[i]%2 ==1 ) {
            for ( check = 2 ; check * check <= number[i] ; check++ ) {
                if ( number[i] % check == 0 ) {
                    printf( " # " ) ;
                    break ;
                }//end if
            }//end for
            if ( check  *check > number[i] ) {
                printf( " %d " , number[i] ) ;
            }//end if
        }//end if
    }//endfor วนของ Array
    
    return 0 ;
}//end main
