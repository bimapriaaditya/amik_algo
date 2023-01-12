#include <cstdio>

int ProgramC()
{
    int age = 25;
    int isStudent = 1;

    if (age > 21 && !isStudent) {
        printf("Eligible for voting and drinking\n");
    } else if (age > 18 && !isStudent) {
        printf("Eligible for voting only\n");
    } else {
        printf("Not eligible for voting or drinking\n");
    }

    return 0;
}