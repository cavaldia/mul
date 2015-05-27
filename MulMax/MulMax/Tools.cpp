#include "stdafx.h"
#include "tools.h"
#include <stdlib.h>



int matrixAlloc(int n, int m, matrix* out)
{

	out->m = m;
	out->n = n;

	out->element = (double**)malloc(n*sizeof(double*));

	for (int i = 0; i < n; i++)
	{
		out->element[i] = (double*)malloc(n*sizeof(double));
	}


	return 0;
}