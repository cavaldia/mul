// MulMax.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	//int n, m;

	matrix A;
	matrix B;
	matrix C;
	

	int status = matrixAlloc(10, 10, &A);
	status = matrixAlloc(10, 10, &B);
	status = matrixAlloc(10, 10, &C);


	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j<10; j++)
		{
			A.element[i][j] = i + j;
			B.element[i][j] = 0;
		}
		B.element[i][i] = 1;
	}


	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j<10; j++)
		{
			printf("%.2f \t", A.element[i][j]);
		}
	}

	printf("\n\n\n");

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j<10; j++)
		{
			printf("%.2f \t", B.element[i][j]);
		}
	}


	printf("\n\n\n");

	MatrixMul(A, B, C);


	

	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j<10; j++)
	//	{
	//		printf("%.2f \t", C.element[i][j]);
	//	}
	//}

	getchar();

	return 0;
}

