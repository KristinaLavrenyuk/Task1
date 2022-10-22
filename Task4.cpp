
#include <iostream>
using namespace std;

int main()
{
	int A, FactA = 1;
	cin >> A;

	for (int i = 1; A >= i; i++)
	{
		FactA *= i;
	}
	cout << "A!: " << FactA << endl;

	system("pause");
}
