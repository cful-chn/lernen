#include<iostream>
#include<string>

using namespace std;

struct student
{
	string sname;
	int Ergebnis;
};

struct lehrer
{
	string lname;
	student GruppeS[5];
};

void geben(struct lehrer* GruppeL,struct student* GruppeS, int j,int i)
{
	string nameku = "";

	for (int m = 0; m < j; m++)
	{
		cout << "�������" << m + 1 << "����ʦ������:" << "  " << endl;
		cin >> nameku;
		GruppeL[m].lname = nameku;
		for (int n = 0; n < i; n++)
		{
			cout << "�������" << m + 1 << "����ʦ" << n + 1 << "��ѧ��������:" << "  " << endl;
			cin >> nameku;
			GruppeS[n].sname = nameku;
		}
		cout << "��" << m+1 << "����ʦ������Ϊ" << GruppeL[m].lname << endl;
		for (int q = 0; q < i; q++)
		{
			cout << "����ѧ���ֱ�Ϊ"<<endl;
			cout << "��" << q << "��ѧ��������Ϊ" << GruppeS[q].sname << endl;
		}

	}
}

int main() {

	struct student GruppeS[5];
	
	int i = sizeof(GruppeS) / sizeof(GruppeS[0]);

	struct lehrer GruppeL[3];
	int j = sizeof(GruppeL) / sizeof(GruppeL[0]);

	geben(GruppeL,GruppeS, j,i);
	
	

	system("pause");
	return 0;
}