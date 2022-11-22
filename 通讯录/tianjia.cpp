#include "tianjia.h"

//添加联系人
void addlianxiren(tongxunlu* abc)
{
	if (abc->size == Max)
	{
		cout << "通讯录已满" << endl;
		return;
	}
	else {
		//输入名字
		string mingzi;
		cout << "请输入姓名:  " << endl;
		cin >> mingzi;
		abc->mann[abc->size].ganzname = mingzi;
		//输入性别
	FLOG:
		int xingbiexuanze;
		cout << "请输入性别，男性输入1，女性输入2" << endl;
		cin >> xingbiexuanze;
		if (xingbiexuanze == 1 || xingbiexuanze == 2)
		{
			abc->mann[abc->size].sex = xingbiexuanze;
		}
		else {
			cout << "只能输入1(男性)或2(女性)，请重新输入" << endl;
			goto FLOG;
		}
		
		//输入年龄
		int nianlingshuru;
		cout << "请输入年龄" << endl;
		cin >> nianlingshuru;
		abc->mann[abc->size].age = nianlingshuru;

		//输入电话号码
		int dianhuahaoshuru;
		cout << "请输入电话号码" << endl;
		cin >> dianhuahaoshuru;
		abc->mann[abc->size].Handynr = dianhuahaoshuru;
		cin.clear();
		cin.ignore(100, '\n');
		//输入地址
		string dizhishuru;
		cout << "请输入地址" << endl;
		cin >> dizhishuru;
		abc->mann[abc->size].Adress = dizhishuru;

		cout << "添加成功" << endl;
		abc->size++;
		cin.clear();
		cin.ignore(100, '\n');
		system("pause");
		system("cls");
		

	}
}