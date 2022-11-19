#include <iostream>
using namespace std;
int main()
{
	int i = 0, j = 0, massiv[30][30], k = 0, n = 0;
	cout << "Enter i: ";	//columns
	cin >> i;
	cout << "Enter j: ";	//rows
	cin >> j;
	for (int p = 0; p < j; p++)		//filling the matrix
	{
		for (int r = 0; r < i; r++)
		{
			cout << "Enter " << r << "x" << p << " element: ";
			cin >> massiv[r][p];
			if (massiv[r][p] > 0) k = 1;
		}
		n += k;
	}
	cout << "The matrix is\n";
	for (int p = 0; p < j; p++)		//displaying the matrix
	{
		for (int r = 0; r < i; r++)
		{
			cout << massiv[r][p] << "  ";
		}
		cout << endl;
	}
	if (n >= j)		//changing signs and
	{				//displaying the new matrix
		cout << "The new matrix is\n";
		for (int p = 0; p < j; p++)		
		{								
			for (int r = 0; r < i; r++)
			{
				massiv[r][p] = massiv[r][p] * -1;
				cout << massiv[r][p] << "  ";
			}
			cout << endl;
		}
	}
	else cout << "There wasn't enough positive numbers, the matrix will not be changed :(";
	return 0;

}

