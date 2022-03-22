\\* C Program to to reverse a number using pointer *\\

# include < stdio.h >
int  main( )
{
int  num, rem, rev=0 ;
int  *pn, *pr ;
printf(" Enter the number : ") ;
scanf("%f ",& num) ;

pn = & num ;
pr = & rev ;

do
{
rem = ( *pn ) % 10 ;
*pr = ( *pr * 10 ) + rem ;
*pn = ( *pn ) / 10 ;
}while(  *pn > 0) ;
printf("\n Reverse of Number is : %d ",*pr) ;
return ( 0 );
}
