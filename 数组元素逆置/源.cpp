#include<iostream>
using namespace std;

int main() {
	int arr[5]={1,2,3,4,5};
	int brr[5];
	int i = sizeof(arr) / sizeof(arr[1])-1;
	for (int j = 0; j < 5; j++)
	{
		brr[j] = arr[i];
		cout << brr[j] << endl;
		i--;
	}
	
	system("pause");
	return 0;
}