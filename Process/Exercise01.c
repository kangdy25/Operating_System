#include <stdio.h>
#include <sys/_types/_pid_t.h>
#include <unistd.h>
#include <sys/wait.h>

// What output will be at Line A?

int value = 5;

int main() {
	pid_t pid;
	pid = fork();
	
	if (pid == 0) { // child process
		value += 15; // 20
		return 0; // Terminated
	}
	else if (pid > 0) { // parent process
		wait(NULL); 
		// Restart Parent Process task, value: 5
		printf("Parent: value = %d\n", value); // Line A
	}

}
// Answer: 5
