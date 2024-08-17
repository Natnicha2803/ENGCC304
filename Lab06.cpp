#include<stdio.h>
int main () {
int n = 0 ;
printf( "Enter number : " ) ;
scanf( "%d" ,&n ) ;
if( n%2 == 0 ) { //คู่
    for( int j = 0 ; j < n ; j++ ) {
        for( int c = 0 ; c < n ; c++ ) {
            if( c==j ) {
                printf( "1" ) ;
            } else {
                printf( "0" ) ;
            } //end if else
        }//for
        printf( "\n" ) ;
    }//for
    } else { //คี่
        for ( int j = 1 ; j <= n ; j++ ) {
            for ( int c = 1 ; c <= n ; c++ ) {
            if( c == n - j + 1 ) {
                printf( "1" ) ;
            } else {
                printf( "0" ) ;
            }//end if else
        }//for
        printf( "\n" ) ;
    }//for
}//if else
return 0 ;
}//end main
