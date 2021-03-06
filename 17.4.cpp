#include<iostream>

using namespace std;
/*
Рассматривается множество целых чисел, принадлежащих числовому отрезку [100100; 400400], 
которые кратны 321 и  делятся без остатка на сумму своих цифр. 
Найдите количество таких чисел и максимальное из них.

В ответе запишите два целых числа: сначала количество, затем максимальное число.
Для выполнения этого задания можно написать программу или воспользоваться редактором электронных таблиц.
*/
int getSum(int a) {
	int val = 0;
	while (a) {
		val += a % 10;
		a /= 10;
	}
	return val;
}

int main() {
	int count = 0;
	int max = 0;
	for (int i = 100100; i <= 400400; i++) {
		if (i % 321 == 0 and i % getSum(i) == 0) {
			count++;
			if (i > max) max = i;
		}
	}
	cout << count << " " << max;
}
