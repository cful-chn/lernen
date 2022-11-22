#include"xiugai.h"

void xiugai(tongxunlu* abc, int i)
{
	if (i != -1)
	{
		cout << "现在进行联系人修改" << endl;
		//输入名字
		string mingzi;
		cout << "请输入姓名:  " << endl;
		cin >> mingzi;
		abc->mann[i].ganzname = mingzi;
		//输入性别
	FLOG:
		int xingbiexuanze;
		cout << "请输入性别，男性输入1，女性输入2" << endl;
		cin >> xingbiexuanze;
		if (xingbiexuanze == 1 || xingbiexuanze == 2)
		{
			abc->mann[i].sex = xingbiexuanze;
		}
		else {
			cout << "只能输入1(男性)或2(女性)，请重新输入" << endl;
			goto FLOG;
		}

		//输入年龄
		int nianlingshuru;
		cout << "请输入年龄" << endl;
		cin >> nianlingshuru;
		abc->mann[i].age = nianlingshuru;

		//输入电话号码
		int dianhuahaoshuru;
		cout << "请输入电话号码" << endl;
		cin >> dianhuahaoshuru;
		abc->mann[i].Handynr = dianhuahaoshuru;
		cin.clear();
		cin.ignore(100, '\n');
		//输入地址
		string dizhishuru;
		cout << "请输入地址" << endl;
		cin >> dizhishuru;
		abc->mann[i].Adress = dizhishuru;

		cout << "修改成功" << endl;

		cin.clear();
		cin.ignore(100, '\n');
		system("pause");
		system("cls");
	}
}