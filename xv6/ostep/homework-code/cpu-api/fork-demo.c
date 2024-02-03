#include <stdio.h>
#include <unistd.h>
int main() {
    pid_t p1 = fork();
    pid_t p2 = fork();
    // pid_t p3 = fork();
    // printf("hello world from(%d, %d,  %d)\n", p1, p2, p3);
    printf("hello world from(%d, %d)\n", p1, p2);
}
