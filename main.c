#include <stdio.h>
#include <stdlib.h>


void function() {
    static int counter[10] = {0};

    srand(rand());
    for (register int i = 0; i < 1000; i++) {
        counter[rand()%10]++;
    }

    for (register int i = 0; i < 10; i++) {
        printf("%d: %d; ", i, counter[i]);
    }
    printf("\n");
}

int main() {
    for (register int i = 0; i < 10; i++) {
        function();
    }
    return 0;
}
