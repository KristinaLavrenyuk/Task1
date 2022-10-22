
#include <iostream>
using namespace std;

int main()
{
	int A, b, counter1 = 0, counter2 = 0;
	cin >> A;

	while (A > 0)
	{	
		b = A % 10;
		if (b % 2 == 0)
		{
			if (b != 0)
			{
				counter1++;
			}
		}
		else
		{
			counter2++;
		}
		A /= 10;
	}
	cout << "Chotnie: " << counter1 << endl << "Unchotnie: " << counter2 << endl;

	system("pause");
}
