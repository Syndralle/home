#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>
// int main() {
//     int rc = fork();
//     if (rc == 0) {
//         printf("(%d): hello\n", (int)getpid());
//     } else {
//         int wc = wait(NULL);
//         assert(wc >= 0);
//         printf("(%d): world!\n", (int)getpid());
//     }
// }
int main() {
    int pipefd[2];

    // Create a pipe
    if (pipe(pipefd) == -1) {
        perror("pipe");
        exit(EXIT_FAILURE);
    }

    pid_t pid = fork();

    if (pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (pid == 0) {
        // Child process
        close(pipefd[0]); // Close the read end of the pipe

        // Child process execution here

        printf("(%d) hello\n", (int)getpid());
        // Send a signal to the parent through the pipe
        write(pipefd[1], "c", 1);

        close(pipefd[1]); // Close the write end of the pipe
    } else {
        // Parent process
        close(pipefd[1]); // Close the write end of the pipe

        // Wait for the signal from the child
        char buffer[1];
        read(pipefd[0], buffer, 1);

        // Parent process execution here

        printf("(%d): world!\n", (int)getpid());
        close(pipefd[0]); // Close the read end of the pipe
    }

    return 0;
}
