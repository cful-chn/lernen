#include <iostream>
using namespace std;

int main()
{
	double a = 0;
	double b = 0;
	double c = 0;
	cout << "�������һֻС������� :" <<  endl;
	cin >> a ;
	cout << "������ڶ�ֻС������� :" << endl;
	cin >> b ;
	cout << "���������ֻС������� :" << endl;
	cin >> c ;
	if (a>b && a>c) {
		cout << "��1ֻС����������� :" << endl;
	
	}
	else if (b > c) {
		cout << "��2ֻС����������� :" << endl;
	}
	else {
		cout << "��3ֻС����������� :" << endl;
	
	}
	

	system("pause");

	return 0;
}