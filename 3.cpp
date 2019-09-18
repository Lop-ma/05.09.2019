#include <iostream>
//Написать программу находящую количество делителей натурального числа
using namespace std;

int main() {
	int a, k = 0;
	cin >> a;
	for (int i = 1; i < a + 1; i++)
		if (a % i == 0)
			k++;
	cout << k;
	return 0;
}
