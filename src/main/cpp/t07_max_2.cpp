//Последовательность состоит из натуральных чисел и завершается числом 0. Определите значение второго по величине элемента в этой последовательности, то есть элемента, который будет наибольшим, если из последовательности удалить наибольший элемент.
//
//Формат входных данных
//        Вводится последовательность целых чисел, оканчивающаяся числом 0 (само число 0 в последовательность не входит, а служит как признак ее окончания).
//Формат выходных данных
//        Выведите ответ на задачу.
//Sample Input 1:
//
//4
//4
//2
//3
//0
//Sample Output 1:
//
//4
//Sample Input 2:
//
//2
//1
//0
//Sample Output 2:
//
//1

#include "t07_max_2.h"
#include <iostream>

using namespace std;

int t07_max_2() {
	int max = -99999999, i = -1, max2 = -999999;
	while (i != 0)
	{
		cin >> i;
		if (i > max)
		{
			max2 = max;
			max = i;
		
		}
		else if(i >max2)
		{
			max2 = i;
		}
	}
	cout << max2;
	return 0;
	
};