#include "matrix.h"
#include <vector>
#include <iostream>

using namespace std;
int main()
{
	
	matrix<int, 5,5> i_mat(5, 5); // 5x5 matrix
	i_mat.setElement(0, 0, 10);
	cout << i_mat.getElement(0, 0) << endl; // 10.0
	matrix<float, 5,5> f_mat(5, 5); // 5x5 matrix
	f_mat.setElement(0, 0, 7.5);
	cout << f_mat.getElement(0, 0) << endl; // 7.5
}