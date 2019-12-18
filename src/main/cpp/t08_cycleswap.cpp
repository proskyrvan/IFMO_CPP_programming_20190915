//Циклически сдвиньте элементы списка вправо (A[0] переходит на место A[1], A[1] на место A[2], ..., последний элемент переходит на место A[0]).
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//5
//1 2 3 4 5
//Sample Output:
//
//5 1 2 3 4

#include "t08_cycleswap.h"
#include <iostream>


using namespace std;

int t08_cycleswap() {
	int N;
	cin >> N;
	int A[N];
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	int temp = 0;
	for (int i = N - 1; i > 0; i--)
	{
		if (i == N - 1)
		{
			temp = A[0];
			A[0] = A[N - 1];
		}
		if (i == 1)
		{
			A[i] = temp;
		}
		else {
			A[i] = A[i - 1];
		}
	}
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
	return 0;
}