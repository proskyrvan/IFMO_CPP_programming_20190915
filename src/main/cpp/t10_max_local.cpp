//Элемент последовательности называется локальным максимумом, если он строго больше предыдущего и последующего элемента последовательности. Первый и последний элемент последовательности не являются локальными максимумами.
//
//Дана последовательность натуральных чисел, завершающаяся числом 0. Определите количество строгих локальных максимумов в этой последовательности.
//
//Формат входных данных
//        Вводится последовательность натуральных чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input:
//
//1
//2
//1
//2
//1
//0
//Sample Output:
//
//2

#include "t10_max_local.h"
#include <iostream>

using namespace std;

int t10_max_local() {
	int lMax = -999, count =1,nextV = -999, prev = 999, i = -1 ;
	cin >> prev;
	cin >> i;
	cin >> nextV;
	while (i != 0)
	{
		if (i > prev && i > nextV && i >= lMax && nextV != 0)
		{
			if (i == lMax)
			{
				count++;
			}
			else
			{
				count = 1;
			}
			lMax = i;
		}
		prev = i;
		i = nextV;
		cin >> nextV;
	}
	if (lMax == -999)
	{
		count = 0;
	}
	cout << count;
	return 0;
};