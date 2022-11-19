#include <iostream>
using namespace std;
int main()
{
	int i = 0, j = 0, massiv[30][30];
	cout << "Enter i: ";	//columns
	cin >> i;
	cout << "Enter j: ";	//rows
	cin >> j;
	if (i > 30)		//checking input
	{
		cout << "Incorrect input!";
		return 0;
	}
	if (j > 30)		
	{
		cout << "Incorrect input!";
		return 0;
	}
	for (int p = 0; p < j; p++)		//filling the matrix
	{
		for (int r = 0; r < i; r++)
		{
			cout << "Enter " << r << "x" << p << " element: ";
			cin >> massiv[r][p];
		}
	}
	
	for (int p = 0; p < j; p++)		//displaying the matrix
	{
		for (int r = 0; r < i; r++)
		{
			cout << massiv[r][p] << "  ";
		}
		cout << endl;
	}
	cout << "The characteristics are:\n";
	int charact[30]{};
	for (int r = 0; r < i; r++)		//calculating characteristics of a column
	{
		for (int p = 0; p < j; p++)
		{
			if (massiv[r][p] % 2 !=0)
			{
				if (massiv[r][p] < 0) 
				{
					charact[r] = charact[r] + abs(massiv[r][p]);
				}
			}
		}
		cout << charact[r] << "  ";
	}
	cout << endl;
	for (int r = 0; r < i-1; r++)		//sorting characteristics
	{									//and columns
		for (int g = 0; g < i-r-1; g++)
		{
			if (charact[g] > charact[g + 1])
			{
				swap(charact[g], charact[g + 1]);
				for (int m = 0; m < j; m++)		//swapping columns
				{
					swap(massiv[g][m], massiv[g + 1][m]);
				}
			}
		}	
	}
	cout << "The sorted matrix is:\n";
	for (int p = 0; p < j; p++)		//displaying the sorted matrix
	{
		for (int r = 0; r < i; r++)
		{
			cout << massiv[r][p] << "  ";
		}
		cout << endl;
	}
	return 0;
}
