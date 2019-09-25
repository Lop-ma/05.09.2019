//Написать функцию сортировки массива, использующую указательную арифметику вместо обращения по индексам. 
#include <iostream>

int main() {
	int n;
	std::cin >> n;
	int *a = new int;
	for (int i = 0; i < n; std::cin >> *(a + i++));
	for (int i = 0; i < n; i++) { 
		int min = i; 
		for (int j = i; j < n; j++) { 
			if (*(a+j) < *(a+min)) {
				min = j;
			}
		}
		int b;
		b = *(a+i);
		*(a+i) = *(a+min);
		*(a+min) = b;
	}
	for (int i = 0; i < n; i++)
		std::cout << *(a + i) << " ";
	delete a;
	return 0;
}
