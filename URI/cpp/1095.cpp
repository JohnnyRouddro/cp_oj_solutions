#include <iostream>
using namespace std;

int main() {

	int i = 1, j = 60;

	while (j)
	{
		cout << "I=" << i << " J=" << j << endl;
		i += 3;
		j -= 5;
	}
	cout << "I=" << i << " J=" << j << endl;

	return 0;
}