#include<iostream>
using namespace std;

int main() {
	int i = 0;
	int t[5] = { 300,350,250,400,250 };
	int a = t[i];
	for (; i < 4; i++) 
	{
		
		int b = t[i + 1];
		if (a <= b)
		{
			a = b;
		}


	}
	cout <<"体重最大的是 " << a << endl;
	system("pause");
	return 0;
}