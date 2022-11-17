#include<iostream>
using namespace std;

int main() {
	int arr[] = { 12,654,125,84,15,156,4,9,151,589641,2,15,4,231,3,2,49 };
	int i = sizeof(arr) / sizeof(arr[1]);
	
	for (int n = 0; n < i - 1; n++)
	{
		for (int m = 0; m < (i - 1 - n); m++)
		{
			if (arr[m] > arr[m + 1])
			{
				int a;
				a = arr[m + 1] ;
				
				arr[m + 1] = arr[m];
				arr[m] = a;
			}
			
		}
		for (int k = 0; k < i ; k++)
		{
			cout << arr[k] << "   ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}