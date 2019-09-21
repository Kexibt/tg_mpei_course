// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://leetcode.com/problems/powx-n/

#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char* argv[])
{
	int n;
	double x;
	int count=0;
	cin >> x >> n;

	if (n == 0) return 1;
	if (n == 1) return x;
	if (x == 0 || x == 1) return x;
	do {
		if (n % 2 == 0) {
			count++; n /= 2;
		}
	} while (n % 2 == 0);
	x = pow(x, n);
	for (int i = 0; i < count; ++i) {
		x *= x;
	}
	return x;
}
