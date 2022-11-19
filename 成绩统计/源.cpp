#include<iostream>
using namespace std;

int main() {
	int arr[][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};
	int a = sizeof(arr) / sizeof(arr[0]);
	
	for (int i = 0; i < a;i++)
	{
		int c = 0;
		for (int j = 0; j < 3; j++)
		{
			int b = arr[i][j];
			//c = b+c;
			c += b;
		}
		string name[] = {"张三","李四","王五"};
		cout << name[i] << "的成绩是:" << "  " << c << endl;

	}


	system("pause");
	return 0;
}