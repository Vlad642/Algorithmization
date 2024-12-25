#include <iostream>
#include "MatrixDense.h"

int main()
{
    MatrixDense<int> m1(2, 2);
    MatrixDense<int> m2(2, 2);
    m1.SetRnd();
    m2.SetRnd();

    MatrixDense<int> res = m1 + m2; 
    res.PrintMatrix();
}


