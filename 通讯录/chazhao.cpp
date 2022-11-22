#include"chazhao.h"

int chazhao(tongxunlu* abc)
{
	string name;
	cout << "请输入联系人姓名" << endl;
	cin >> name;
	for (int i = 0; i < abc->size; i++)
	{
		if (abc->mann[i].ganzname == name)
		{

			cout << "联系人姓名为   " << abc->mann[i].ganzname << "\t";
			if (abc->mann[i].sex == 1)
			{
				cout << "联系人性别为  男 " << "\t";
			}
			else
			{
				cout << "联系人性别为  女 " << "\t";
			}

			cout << "联系人年龄为   " << abc->mann[i].age << "\t";
			cout << "联系人手机号码为   " << abc->mann[i].Handynr << "\t";
			cout << "联系人地址为   " << abc->mann[i].Adress << endl;

			system("pause");
			
			return i;

		}
		
	}
	cout << "查无此人" << endl;
	system("pause");
	
	return -1;

}