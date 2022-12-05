#include <iostream>
#include <string>
#include "link_matrix_funk.h"
using namespace std;


bool isUint(const std::string& s) {
    return s.find_first_not_of("0123456789") == std::string::npos;
}

int input_value_matrix(bool v)
{
    int n = 0;
    string line = "¬ведите количесвто строк матрицы (до 15)";
    string colum = "¬ведите количесвто столбцов матрицы (до 10)";
    string print;
    int n_line = 16;
    int n_colum = 11;
    int n_print;
    if (v)
    {
        print = line;
        n_print = n_line;
    }
    else
    {
        print = colum;
        n_print = n_colum;
    }
    string number;
    bool input_switch = true;
    while (input_switch)
    {
        std::cout << print << endl;
        std::getline(std::cin, number);
        if (number.empty())
            break;
        if (isUint(number))
        {
            n = stoi(number);
            if ( n < n_print)
            {
                if (2 < n)
                {
                    input_switch = !input_switch;
                }
            }
        }
    }
    return n;
}