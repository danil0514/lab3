#include "print_r.h"
#include <iostream>
#include <string>
using namespace std;

void print_r(int** matrix_new,int row_size,int colum_size) {
    cout << "Новая  матрица" << endl;
    for (int count_row = 0; count_row < row_size; count_row++)
    {
        for (int count_column = 0; count_column < colum_size; count_column++)
            cout << matrix_new[count_row][count_column] << "   ";
        cout << endl;
    };
}