#ifndef SIMD_OUTPUT_UNIT_C
#define SIMD_OUTPUT_UNIT_C

#include "io.h"

void outputString(string)
const char* string;
{
    printf(string);
}

void outputShort(number)
const short* number;
{
    printf("%d", number);
}

void outputSquareMatrix(matrixName, matrix, x, y)
const char* matrixName;
short*** matrix;
const int x;
const int y;
{
    printf("matrix %s:\n", matrixName);
    int i;
    int j;
    for(i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%s[%d][%d] = %d;     \t\t", matrixName, i, j, *(*(*matrix + i) + j));
        }
        printf("\n");
    }
}

void outputTriDimMatrix(matrixName, matrix, x, y, z)
const char* matrixName;
short**** matrix;
const int x;
const int y;
const int z;
{
    printf("matrix %s:\n", matrixName);
    int i;
    int j;
    int k;
    for(i = 0; i < x; i++)
    {
        for(j = 0; j < y; j++)
        {
            for(k = 0; k < z; k++)
            {
                printf("%s[%d][%d][%d] = %d;  \t", matrixName, i, j, k, *(*(*(*matrix + i) + j) + k));
            }
            printf("\n");
        }
        printf("\n");
    }
}

#endif //SIMD_OUTPUT_UNIT_C