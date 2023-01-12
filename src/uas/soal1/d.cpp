#include <cstdio>
#define ROW 3
#define COL 4

int ProgramD()
{
    int array2D[ROW][COL] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };
    
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            printf("%d ", array2D[i][j]);
        }
        printf("\n");
    }

    return 0;
}