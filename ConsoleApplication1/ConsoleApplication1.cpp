#include <iostream>
#include <string>
#include "link_matrix_funk.h"
#include "link_matrixr.h"
#include "calculation.h"
#include "print_r.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int colum_size = input_value_matrix(false);
    int row_size = input_value_matrix(true);
    int** matrix = new int* [row_size];
    for (int count = 0; count < row_size; count++)
    {
        matrix[count] = new int[colum_size];
    }
    int** matrix_new = new int* [row_size];
    for (int count = 0; count < row_size; count++)
    {
        matrix_new[count] = new int[colum_size];
    }
    input_element_matrix(colum_size, row_size, matrix);
    calculate_matrix_value_new(colum_size, row_size, matrix, matrix_new);
    print_r(matrix_new, row_size, colum_size);
}

