#include <stdio.h> 
 
int main() 
{ 
	int n[10]; 
	int i, osum, esum ; 
	 
	for( i=0; i<10; i++ ) { 
		printf( "Enter number : " ); 
		scanf( "%d", &n[i] ); 
		if( n[i]%2 == 0 ) 
		     esum += n[i]; 
		else 
		     osum += n[i];  
	} 
	 
	printf( "Analysis: \n" ); 
	printf( "Sum of all odd numbers is : %d\n", osum ); 
	printf( "Sum of all even numbers is : %d\n", esum );  
	return 0; 
} 
