#include <stdio.h>
#include <unistd.h>

// How many processes are created?

int main() {
	int i ;
	for (i = 0; i < 4; i++)
		fork();

	return 0;
}
// Answer: 16
// i = 0 -> Process 2 
// i = 1 -> Process 4 
// i = 2 -> Process 8
// i = 3 -> Process 16 
