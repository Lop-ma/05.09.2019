//Написать функцию удаляющую из целочисленного массива все четные элементы. Гарантируется, что в массиве есть хотя бы один нечетный элемент. 
#include <iostream>

int main() {
	int n, k = 0;
	std::cin >> n;
	int *a = new int;
	for (int i = 0; i < n; i++) {
		int t;
		std::cin >> t;
		if (t % 2 != 0) {
			a[k] = t;
			k++;
		}
	}
	for (int i = 0; i < k; i++)
		std::cout << a[i] << " ";
	delete a;
	return 0;
}
