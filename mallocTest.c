#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    int i = 0;
    for(i = 0; i < 1000000; i++) {
       void * result = malloc(32);
    }
    printf("hello world\n");
    exit(0);
}
