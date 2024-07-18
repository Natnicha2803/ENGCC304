#include <stdio.h>

int main() {
    char employeesID[10] ;
    int hrs, salary ;
    float money ;

    printf( "Input the Employees ID(Max. 10 chars): " ) ;
    scanf( "%s", employeesID ) ;
    printf( "Input the working hrs: " ) ;
    scanf( "%d", &hrs ) ;
    printf( "Salary amount/hr: " ) ;
    scanf( "%d", &salary ) ;

    money = hrs * salary ;

    printf( "--------------------------------------------------------------\n" ) ;
    printf( "Employees ID = %s \n", employeesID ) ;
    printf( "Salary = U$ %.2f", money ) ;
    printf( "\n--------------------------------------------------------------" ) ;

    return 0 ;
}//end main function
