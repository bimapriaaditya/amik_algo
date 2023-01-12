#include <cstdio>

int ProgramA()
{
    int x = 10, y = 20, z = 30;

    if (x > y) {
        if (x > z) {
            printf("X is the largest \n");
        } else {
            printf("Z is the largest \n");
        }
    } else {
        if (y > z) {
            printf("Y is the largest \n");
        } else {
            printf("Z is the largest \n");
        }
    }

    return 0;
}