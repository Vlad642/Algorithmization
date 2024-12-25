#pragma once
#include <iostream>

template<typename T>
class MatrixDense
{
	unsigned _m; //rows
	unsigned _n; //columns
	T* _data;

public:
	MatrixDense(unsigned m, unsigned n) : _m(m), _n(n)
	{
		_data = new T[_m * _n];
	}

	~MatrixDense() 
	{
		delete[] _data;
	}

	void SetElement(unsigned i, unsigned j, T value)
	{
		unsigned ind = j + i * _n;
		_data[ind] = value;
	}

	T GetElement(unsigned i, unsigned j)
	{
		return _data[j + i * _n];
	}

	void PrintMatrix() 
	{
		for (unsigned i = 0; i < _m; i++) 
		{
			for (unsigned j = 0; j < _n; j++)
			{
				std::cout << GetElement(i,j) << ' ';
			}
			std::cout << std::endl;
		}
	};

	void SetRnd() 
	{
		for (unsigned i = 0; i < _m; i++)
		{
			for (unsigned j = 0; j < _n; j++)
			{
				SetElement(i, j, rand() % 100);
			}
		}
	}

	MatrixDense operator + (const MatrixDense& m2) 
	{
		MatrixDense res(_m,_n);
		for (unsigned i = 0; i < _m * _n; i++) 
		{
			res._data[i] = _data[i] + m2._data[i];
		}
		return res;
	}
};

