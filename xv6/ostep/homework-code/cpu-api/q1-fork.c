#include <stdio.h>
#include <unistd.h>

int main() {
    int x = 10;
    int fc = fork();
    if (fc) {
        x -= 10;
        printf("x in parent(%d): %d\n", (int)getpid(), x);
    } else {
        x += 5;
        printf("x in child(%d): %d\n", (int)getpid(), x);
    }
    return 0;
}
