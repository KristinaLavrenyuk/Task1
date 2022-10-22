
#include <iostream>
using namespace std;

int main()
{
	int A, counter = 0;
	cin >> A;

	while (A > 0)
	{
		A = A / 10;
		counter++;
	}
	cout << counter;

	system("pause");
}
