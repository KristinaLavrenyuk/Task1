
#include <iostream>
using namespace std;

int main()
{
	int A, ii = 1, b, c;
	cin >> A;
	b = A;

	while (b >= 10) 
	{
		b = b / 10;
		ii *= 10;
	}
	while (ii != 0)
	{
		c = A / ii % 10;
		cout << c;
		ii /= 10;
	}
	cout << endl;
	system("pause");
}
