#include<iostream>
using namespace std;
#include<ctime>

int main() {

	srand((unsigned int)time(NULL));
	int a = rand() % 100 + 1;
	int b=0;
	int c = 0;
	cout << "�����:" << endl;
	cin >> b;
	while (1) {
		c++;
		if (b > a) {
			cout << "�´��ˣ����ٲ�" << endl;
			cin >> b;
		}
		else if(a<b) {
			cout << "��С�ˣ����ٲ�" << endl;
			cin >> b;
		}
		else if (c > 4) {
			cout << "��Ϸʧ��" << endl;
			break;
		}
		else {
			cout << "��ϲ���" << endl;
			break;
		}
		
	}
	
	system("pause");
	return 0;
}