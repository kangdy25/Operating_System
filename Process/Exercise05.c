#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

// What are the pid values?

int main() {
	pid_t pid, pid1;
	pid = fork();
	if (pid == 0) {
		pid1 = getpid();
		printf("child: pid = %d\n", pid); // A
		printf("child: pid1 = %d\n", pid1); // B
	}
	else if (pid > 0) {
		wait(NULL);
		pid1 = getpid();
		printf("parent: pid = %d\n", pid); // C
		printf("parent: pid1 = %d\n", pid1); // D
	}

	return 0;
}
// Answer: B == C
