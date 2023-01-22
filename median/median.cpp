#include <iostream>
using namespace std;
float median(int arr[], int size);
int main()
{
	int arr[] = { 4,3,5,9,2,1 };
	cout << median(arr, 6);
}

float median(int arr[], int size)
{
	int max = 0, min = 0;
	float umin, umax;
	for (int i = 0; i < size; i++)
	{
		if (size % 2 != 0)
		{
			for (int j = 0; j < size; j++)
			{
				if (j == i && i<size)
				{
					j += 1;
				}
				if (arr[i] > arr[j])
				{
					max++;
				}
				else
				{
					min++;
				}
			}
			if (min == size / 2 && max == size / 2)
			{
				return arr[i];
			}
		}
		else
		{
			for (int j = 0; j < size; j++)
			{
				if (j == i && i < size)
				{
					j += 1;
				}

				if (arr[i] > arr[j])
				{
					max++;
				}
				else
				{
					min++;
				}
			}
			if (max == size / 2 && min == size / 2 - 1)
			{
				umin = arr[i];
			}
			else if (max == size / 2 - 1 && min == size / 2)
			{
				umax = arr[i];
			}

		}
		max = 0;
		min = 0;
	}
	return (umax + umin) / 2;
}