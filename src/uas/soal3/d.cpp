#include <cstdio>

int NastedLoop()
{
    for (int i = 0; i < 5; i++) {
        printf("%d", i+1);
        printf("  ");
        for (int j = 0; j < 5; j++) {
            printf("Hello, world!");
        }
        printf("\n");
    }

    return 0;
}