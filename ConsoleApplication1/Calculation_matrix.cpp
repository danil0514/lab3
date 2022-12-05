#include "calculation.h"
#include <iostream>
#include <string>
using namespace std;

void calculate_matrix_value_new(int colum, int line, int** matrix, int** matrix_new)
{
	int n;
	int s=0;
	int s1 = 0;
	
	for (int count_row = 0; count_row < line; count_row++)
	{
		for (int count_column = 0; count_column < colum; count_column++)
		{	
			for (int count_row_c = 0; count_row_c < line; count_row_c++)
			{
				n = matrix[count_row_c][count_column];
				s = n + s;
			}
			for (int count_colum_c = 0; count_colum_c < colum; count_colum_c++)
			{
				n = matrix[count_row][count_colum_c] ;
				s1 = s1 + n;
			}
			matrix_new[count_row][count_column] = s - s1;
			s = 0;
			s1 = 0;
		};
	};
	
}