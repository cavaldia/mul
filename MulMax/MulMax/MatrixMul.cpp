#include "stdafx.h"
#include "tools.h"
#include <stdlib.h>


//struct Matrix
//{
//	double** element;
//	unsigned m, n;
//
//};

//typedef struct Matrix matrix;

int MatrixMul(matrix A, matrix B, matrix C)
{

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			C.element[i][j] = 0;
		}
	}


	for (unsigned i = 0; i < A.n; i++)
	{
		for (unsigned j = 0; j < B.m; j++)
		{
			for (unsigned k = 0; k < A.m; k++)
			{
				C.element[i][j] += A.element[i][k] * B.element[k][j];
			}

		}
	}

	return 0;
}