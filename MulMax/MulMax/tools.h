#ifndef __TOOLS_H__
#define __TOOLS_H__



struct Matrix
{
	double** element;
	unsigned m, n;

};

typedef struct Matrix matrix;

int matrixAlloc(int n, int m, matrix* out);

int MatrixMul(matrix A, matrix B, matrix C);


#endif