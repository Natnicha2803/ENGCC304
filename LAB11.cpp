#include <stdio.h> //ใช้สำหรับฟังก์ชัน input/output
#include <math.h> //ใช้สำหรับฟังก์ชันทางคณิตศาสตร์ เช่น pow (ยกกำลัง)

int armstrong ( int number ) { //ฟังก์ชันหาเลข armstrong
    int digits = 0 ;
    int num = number ;
    int sum = 0 ;
    int onedigit ;

    while ( number != 0 ) { //หาหลักเลขเพื่อยกกำลัง
        number /= 10 ;
        digits++ ;
    } //end while

    number = num ;

    while ( num != 0 ) { //ทีละหลัก 
       onedigit = num % 10 ;
       sum += pow ( onedigit , digits ) ;
       num /= 10 ;
    } //end while
    return ( number == sum ) ;
} //end armstrong

int main () {
    int number ; 

    printf( "Enter number: " ) ; 
    scanf( "%d" , &number ) ;

    if ( armstrong ( number ) ) {
        printf( "Pass." ) ;
    } else {
        printf( "Not Pass." ) ;
    }
    return 0 ;
} //end main
