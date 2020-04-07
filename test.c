#include <stdio.h>
#include <stdint.h>
#include <string.h>

void* bitcpy(void* , void* , size_t);

int main() {

	unsigned source = 786786786;
    unsigned dest = 0;

    printf( "BEFORE\n");
    printf( "source : %d\n", source );
    printf( "dest   : %d\n\n", dest   );
    
    // copies entire source into dest
    bitcpy((void*)(&dest), (void*)(&source), 8*sizeof(source) );

    printf( "AFTER\n" );
    printf( "source : %d\n", source );
    printf( "dest   : %d\n\n\n", dest   );

    dest = 0;

    printf( "BEFORE\n");
    printf( "source : %d\n", source );
    printf( "dest   : %d\n", dest   );
    
    // copy only the first 10 bits from the source into dest
    bitcpy( (void*)(&dest), (void*)(&source), 10 );
    
    printf( "AFTER\n" );
    printf( "source : %d\n", source );
    printf( "dest   : %d\n", dest   );
    printf( "dest after bitcpy first 10 bits from the source: %d\n", dest);
    
	return 0;
}