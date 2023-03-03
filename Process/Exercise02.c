#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

// How many processes are created?

int main() {
	fork(); // 1 -> 2
	fork(); // 2 -> 4
	fork(); // 4 -> 8
	
	return 0;
}

// Answer: 8
