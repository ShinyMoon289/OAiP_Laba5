#include <iostream>
using namespace std;
int main()
{
	int i = 0, j = 0, massiv[50][50];
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
		}
	}

	for (int p = 0; p < j; p++)		//displaying the matrix
	{
		for (int r = 0; r < i; r++)
		{
			cout << massiv[r][p]<<"\t";
		}
		cout << endl;
	}
	
	for (int p = 0; p < j; p++)		//checking for maximum 
	{								//and minimun values in each row
		int max = massiv[0][p], min = massiv[0][p], maxnum = 0, minnum = 0;
		for (int r = 0; r < i; r++)
		{
			if (massiv[r][p] > max) 
			{
				max = massiv[r][p];
				maxnum = r;
			}
			if (massiv[r][p] < min) 
			{
				min = massiv[r][p];
				minnum = r;
			}
		}
		massiv[maxnum][p] = min;	//swapping elements
		massiv[minnum][p] = max;
	}
	cout << "The changed matrix is:\n";
	for (int p = 0; p < j; p++)		//displaying the changed matrix
	{
		for (int r = 0; r < i; r++)
		{
			cout << massiv[r][p] << "\t";
		}
		cout << endl;
	}

	int trace = 0;
	for (int r = 0; r < j; r++)		//finding the trace
	{								//of the matrix
		trace = trace + massiv[r][r];
	}
	cout << endl;
	cout << "The trace of this matrix is " << trace;
	return 0;
}

