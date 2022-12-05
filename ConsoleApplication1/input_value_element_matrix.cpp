#include <iostream>
#include <string>
#include "link_matrixr.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

int input_element_matrix(int colum, int line, int** matrix )
{
	int colum_matrix = colum;
	int line_matrix = line;
	int n;
	for (int count_row = 0; count_row < line_matrix; count_row++)
	{
		for (int count_column = 0; count_column < colum_matrix; count_column++)
		{
			n = rand() % 98+1;
			matrix[count_row][count_column] = n;
		};
	};
	std::cout << "Начальная матрица"<<endl;
	for (int count_row = 0; count_row < line_matrix; count_row++)
	{
		for (int count_column = 0; count_column < colum_matrix; count_column++)
			cout << matrix[count_row][count_column] << "   ";
		cout << endl;
	}
	return **matrix;
}