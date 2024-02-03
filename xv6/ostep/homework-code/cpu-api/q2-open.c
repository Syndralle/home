#include <assert.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
    FILE *fp = fopen("./test", "ab+");
    assert(fp);
    int rc = fork();
    assert(rc >= 0);
    if (rc) {
        fputs("hello\n", fp);
        printf("x in parent(%d)\n", (int)getpid());
        fclose(fp);
    } else {
        fputs("world\n", fp);
        printf("x in child(%d)\n", (int)getpid());
        fclose(fp);
    }
}
