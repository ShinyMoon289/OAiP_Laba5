#include <iostream>
using namespace std;

int main()
{
	int i = 0, j = 0, massiv[100][100], sum = 0;
	cout << "Enter i: ";	//rows
	cin >> i;
	cout << "Enter j: ";	//columns
	cin >> j;
	for (int p = 0; p < i; p++)		//filling the matrix
	{
		for (int r = 0; r < j; r++)
		{
			cout << "Enter " << p << "x" << r << " element: ";
			cin >> massiv[p][r];
		}
		
	}
	cout << "The matrix is\n";		//displaying the original matrix
	for (int p = 0; p < i; p++)		
	{
		for (int r = 0; r < j; r++)
		{
			cout << massiv[p][r] << "  ";
		}
		cout << endl;
	}
	int max = massiv[0][0];
	for (int p = 0; p < i; p++)		//finding the sum of 
	{								//maximums
		for (int r = 0; r < j; r++)
		{
			if (massiv[p][r] > max) max = massiv[p][r];
		}
		sum += max;
	}
	massiv[i-1][j-1] = sum;

	cout << "The matrix is\n";		//displaying the new matrix
	for (int p = 0; p < i; p++)
	{
		for (int r = 0; r < j; r++)
		{
			cout << massiv[p][r] << "  ";
		}
		cout << endl;
	}

	int chet[100], nechet[100],k=0,m=0;		//sorting odd and even
	for (int p = 0; p < i; p++)		//numbers into separate arrays
	{								
		for (int r = 0; r < j; r++)
		{
			if (massiv[p][r] % 2 == 0)
			{
				chet[k] = massiv[p][r];
				k++;
			}
			else
			{
				nechet[m] = massiv[p][r];
				m++;
			}
		}
	}
	cout << "The array of even numbers is: \n";
	for (int p = 0; p < k; p++)
	{
		cout << chet[p] << "  ";
	}
	cout << endl;
	cout << "The array of odd numbers is: \n";
	for (int p = 0; p < m; p++)
	{
		cout << nechet[p] << "  ";
	}
	return 0;
}

