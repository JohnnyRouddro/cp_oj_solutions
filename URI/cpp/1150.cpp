#include <iostream>
using namespace std;

int main()
{
	int x, z, count = 0, sum = 0;

	cin >> x >> z;

	while (z <= x)
		cin >> z;

	for (int i = x; i <= z; i++)
	{
		sum += i;
		count++;
		if (sum > z)
			break;
	}

	cout << count << endl;

	return 0;
}