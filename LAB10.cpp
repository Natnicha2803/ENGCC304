#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    char word [100] ; 
    char big [100] ;
    int i ;
    printf( "Enter word: " ) ;
    scanf( "%s",word ) ;
    int last = strlen (word) ; 

    while ( i < last ) { 
        big [i] = toupper ( word[i] ) ;  //เปลี่ยนให้เป็นตัวพิมพ์ใหญ่
        i++ ;
    } // end while

    if ( big [0] == big [last - 1] ) { // เทียบค่า ตัวแรก และตัวอักขระสุดท้าย
        printf ( "Pass." ) ;
    } else {
        printf( "Not Pass." ) ;
    } //end if
    
    return 0 ;
} //end main
