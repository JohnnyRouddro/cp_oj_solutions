#include <iostream>
using namespace std;

int main() {
	int n;

	cin >> n;

	if (n % 2 == 1)
	{
		n--;
	}

	for (int i = 2; i <= n; i+=2)
	{
		cout << i << "^2 = " << i * i << endl;
	}

	return 0;
}