#include <stdio.h>

int main (){
	
	const void* p  = (const void*) 0x0000;

	printf("\nDirección de memoria inicial: %x\n", p);
	printf("Dirección de memoria final: %x\n\n", (p-1));
	
	return 0;
}
	

