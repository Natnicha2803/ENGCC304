#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int userscore = 100 ;
    int random , usernumber , play ;
    do {
        srand( time ( NULL ) ) ;
        random = rand () % 100 + 1 ;
       // printf( "%d \n" , random ) ;
        printf( "Do you want to play game ( 1 = play , -1 = exit )\n" ) ;
        scanf( "%d" , & play ) ;
        userscore = 100 ;
        int low = 1 , hight = 100 ;
        if ( play == 1 ) {
            printf( "( Score = %d )\n" , userscore ) ;
            do {
                printf( "Guess the winning number ( %d - %d ) :\n" , low , hight ) ;
                scanf( "%d" , & usernumber ) ;
                if ( usernumber > random ) {
                    userscore -= 10 ;
                    printf( "Sorry, the winning number is LOWER than %d. ( Score = %d ) \n" , usernumber , userscore ) ;
                    hight = usernumber - 1 ;
                } else if ( usernumber < random ) {
                    userscore -= 10 ;
                    printf( "Sorry, the winning number is HIGHER than %d. ( Score = %d ) \n" ,usernumber , userscore ) ;
                    low = usernumber + 1 ;
                } else {
                } //end if
            } while ( usernumber != random ) ;
        } else {
        exit( 0 ) ;
        } //end if
        printf( "That is correct! The winning number is %d\n" , random ) ;
        printf( "Score this game: %d\n" , userscore ) ;
    } while ( play == 1 ) ;
    return 0 ;
} //end main
