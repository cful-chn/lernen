#include <iostream>
using namespace std;

int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	cout << "请输入第一只小猪的体重 :" <<  endl;
	cin >> a ;
	cout << "请输入第二只小猪的体重 :" << endl;
	cin >> b ;
	cout << "请输入第三只小猪的体重 :" << endl;
	cin >> c ;
	if (a>b && a>c) {
		cout << "第1只小猪的体重最重 :" << endl;
	
	}
	else if (b > c) {
		cout << "第2只小猪的体重最重 :" << endl;
	}
	else {
		cout << "第3只小猪的体重最重 :" << endl;
	
	}
	

	system("pause");

	return 0;
}