#include <stdio.h>
#include <stdint.h>
#include <string.h>

/* bitcpy takes 2 void * ptrs and returns dest */
void* bitcpy(void* dest, void* src, size_t numbits)
{
	// error check 
	if (!dest || !src || numbits == 0)
		return dest;

	// cast ptr to point to a type like int - ideally it should
	// be be int64 or even higher
	int* s = (int*) src;
    
	// create temporary var d
	// to create a replica into
	// of the source 
	int* d = (int*) dest;
	
    // set that temporary to 0 to start with
	size_t n = 0;

	unsigned bit = 0x01; // bit flag we use for pos as we scan across the source bit by bit

	*d = 0; // zero out dest to which we will copy
	n = (strlen((char*)s)*8); // how long is the source buffer in bytes

	// error check
	if (numbits >= n)
		n = numbits;

	// start bit copy loop from right side 
	// walking across one bit at a time
	for (int i = 0; i < numbits; i++)
	{
		// is bit a 1 ?
		if (bit & (*s))
		{
			// then set that bit in the dest to be 1 also
			(*d) = (*d) | bit;
		}
		else
		{
			// otherwise it must be 0 so do nothing
		}

		// now move bit position 
		// to test to left by one position
		// go back up the loop
		// and start again
		bit = bit << 1;
	}

	// when all bit are copied
	// copy the result into 
	// the return variable dest
	*((int*)dest) = *d;

	// cast the result back to
	// a void * as expected
	return (void*)dest;

}