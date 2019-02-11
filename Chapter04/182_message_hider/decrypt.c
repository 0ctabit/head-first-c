#include "decrypt.h"

void decrypt(char *encrypted_msg)
{
	while (*encrypted_msg) {
		*encrypted_msg = *encrypted_msg ^ 31;
		encrypted_msg++;
	}
			
}

