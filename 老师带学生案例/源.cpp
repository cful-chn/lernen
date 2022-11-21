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
		cout << "请输入第" << m + 1 << "个老师的姓名:" << "  " << endl;
		cin >> nameku;
		GruppeL[m].lname = nameku;
		for (int n = 0; n < i; n++)
		{
			cout << "请输入第" << m + 1 << "个老师" << n + 1 << "个学生的姓名:" << "  " << endl;
			cin >> nameku;
			GruppeS[n].sname = nameku;
		}
		cout << "第" << m+1 << "个老师的姓名为" << GruppeL[m].lname << endl;
		for (int q = 0; q < i; q++)
		{
			cout << "他的学生分别为"<<endl;
			cout << "第" << q << "个学生的姓名为" << GruppeS[q].sname << endl;
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