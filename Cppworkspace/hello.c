#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello world\n");
#ifdef local
    putchar('\n'), system("pause");
#endif
    return 0;
}