//Дан массив чисел. Посчитайте, сколько в нем пар элементов, равных друг другу. Считается, что любые два элемента, равные друг другу образуют одну пару, которую необходимо посчитать.
//Формат входных данных
//
//        В первой строке вводится количество элементов в массиве. Во второй строке вводятся элементы массива.
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//5
//1 2 3 2 3
//Sample Output 1:
//
//2
//Sample Input 2:
//
//5
//1 1 1 1 1
//Sample Output 2:
//
//10

#include "t09_equals.h"
#include <iostream>


using namespace std;

int t09_equals() {
	int N;
	cin >> N;
	int A[N];
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	int count = 0;
	
	for(int i = 0; i < N-1; i++)
	{
		for (int j = i + 1; j<N; j++)
		{
			if(A[i] == A[j])
			{
				count++;
			}
		}
	}
	cout << count;
	return 0;
}