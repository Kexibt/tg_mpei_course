// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
// https://leetcode.com/problems/jewels-and-stones/

#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

int main(int argc, char* argv[])
{
		setlocale(LC_ALL, "");
		map <char, bool> isJ;
		string J, S;
		char c;
		cin >> J;
		for (int i = 0; i < J.size(); ++i) {
			isJ[J[i]] = true;
		}
		int count = 0;
		cin >> S;
		for (int i = 0; i < S.size(); ++i) {
			if (isJ[S[i]]) ++count;
		}
		cout << count;
		return 0;
}
