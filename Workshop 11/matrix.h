#pragma once
#include <vector>
#include <iostream>
template<typename T, int MAXROWS, int MAXCOLS>
class matrix
{

private:
	
	T arr[MAXROWS][MAXCOLS];
	int rows{};
	int cols{};

public:
	matrix() { rows = 0; cols = 0; }
	matrix(int rows, int cols) {
		this->rows = rows;
	};
	

		T getElement(int row, int col) const {
			return arr[row][col];
		}

	
		void setElement(int row, int col, T value) {
			this->arr[row][col] = value;
		}

	};