#include<stdio.h>

int main(){

int n =0 ;
int ki = 100000 ;
int ku = 1 ;

printf("กรอกเลข");
scanf("%d",&n) ;

if(n%2 == 1){
    for ( int i = 0; i<6 ; i++)
    {
    printf("%06d\n",ki);
    ki /= 10 ;
    }//for
}else if(n%2 == 0){
    for ( int i = 0; i<6 ; i++)
    {
    printf("%06d\n",ku);
    ku *= 10 ;
    }//end for
}//else if
    return 0 ;
}//end main
