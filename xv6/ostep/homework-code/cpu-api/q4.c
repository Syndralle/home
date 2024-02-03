#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
int main() {
    int rc = fork();
    assert(rc >= 0);
    if (rc == 0) {
        // char *args[3];
        // args[0] = strdup("ls");
        // args[1] = NULL;
        // args[2] = NULL;
        // execl("/bin/ls", "ls", (char *)NULL, (char *)NULL);
        // char *env[] = {NULL, NULL, NULL};
        // execle("/bin/ls", "ls", (char *)NULL, env);
        // execlp("ls", args);
        // execv("/bin/ls", args);
        // execvp("ls", args);
        // char *args[] = {"ls", NULL, NULL};
        // char *env[] = {"VAR1=value1", "VAR2=value2", NULL};
        // execve("/bin/ls", args, env);
    } else {
        int wc = wait(NULL);
        assert(wc >= 0);
    }
    return 0;
}
