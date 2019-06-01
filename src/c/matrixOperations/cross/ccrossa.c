#include <stdio.h>
#include <stdlib.h>
#include <cross.h>
#include "floatComplex.h"
#include "stdlib.h"
#include "string.h"
#include "cat.h"

void ccrossa (floatComplex* inp1, int size1_r, int size1_c, floatComplex* inp2, int size2_r, int size2_c ,floatComplex* oup)
{
    int i,j;

    if (size1_c == 3 && size1_r == 1)               // Calculating the cross product for a 1X3 Matrix
    {
        oup[0] = inp1[1]*inp2[2] - inp1[2]*inp2[1];
        oup[1] = inp1[2]*inp2[0] - inp1[0]*inp2[2];
        oup[2] = inp1[0]*inp2[1] - inp1[1]*inp2[0];
        printf("%f %f ", crealf(oup[0]), cimagf(oup[0]));
        printf("%f %f ", crealf(oup[1]), cimagf(oup[1]));
        printf("%f %f \n", crealf(oup[2]), cimagf(oup[2]));
    }
    else					// Calculating the cross product for a 3XN Matrix
    {
        for(i = 0; i < size1_r; i++)
        {
            for(j = 0; j < size1_c; j = j+3)
            {
               oup[j+(i*size1_r)] = inp1[(j+1)+(i*size1_r)] * inp2[(j+2)+(i*size1_r)] - inp1[(j+2)+(i*size1_r)] * inp2[(j+1)+(i*size1_r)];
               oup[(j+1)+(i*size1_r)] = inp1[(j+2)+(i*size1_r)] * inp2[(j+0)+(i*size1_r)] - inp1[(j+0)+(i*size1_r)] * inp2[(j+2)+(i*size1_r)];
               oup[(j+2)+(i*size1_r)] = inp1[(j+0)+(i*size1_r)] * inp2[(j+1)+(i*size1_r)] - inp1[(j+1)+(i*size1_r)] * inp2[(j+0)+(i*size1_r)];

            }
        }

    }
}

