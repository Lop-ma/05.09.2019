#include <iostream>

using namespace std;

int main() 
{
	int n, s = 0, p = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		for (int j = 1; j < a + 1; j++)
			p = p * j;
		s += p;
		p = 1;
	}
	cout << s / n;
	return 0;
}