#include <stdio.h>

int main() {
	unsigned long hash = 5381;
	unsigned char c;
	while (fread(&c, 1, 1, stdin) == 1)
		hash = ((hash << 5) + hash) + c;
	printf("%04lX\n", hash);
   	return 0;
}
