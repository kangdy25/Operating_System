#include <stdio.h>
#include <sys/_types/_pid_t.h>
#include <unistd.h>
#include <sys/wait.h>

// When will Line J be reached? 

int main() {
	pid_t pid;
	pid = fork();

	if (pid == 0) { // child process
		execlp("/bin/ls", "ls", NULL);
		printf("LINE J\n");
	}
	else if (pid > 0) { // parent process
		wait(NULL);
		printf("Child Complete\n");
	}
	return 0;
}
// Answer: It doesn't exist
