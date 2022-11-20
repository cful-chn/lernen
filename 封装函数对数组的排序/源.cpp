#include <iostream>
using namespace std;
#include"≈≈–Ú.h"

int main()
{
	int arr[10] = {1,5,3,2,6,8,4,9,7,10 };
	int i = sizeof(arr) / sizeof(arr[0]);
	paixu(arr,i);
	for (int j = 0; j < i; j++)
	{
		cout << arr[j] << "  " ;

	}
	
	system("pause");
	return 0;

}