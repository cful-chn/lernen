#include"chazhao.h"

int chazhao(tongxunlu* abc)
{
	string name;
	cout << "��������ϵ������" << endl;
	cin >> name;
	for (int i = 0; i < abc->size; i++)
	{
		if (abc->mann[i].ganzname == name)
		{

			cout << "��ϵ������Ϊ   " << abc->mann[i].ganzname << "\t";
			if (abc->mann[i].sex == 1)
			{
				cout << "��ϵ���Ա�Ϊ  �� " << "\t";
			}
			else
			{
				cout << "��ϵ���Ա�Ϊ  Ů " << "\t";
			}

			cout << "��ϵ������Ϊ   " << abc->mann[i].age << "\t";
			cout << "��ϵ���ֻ�����Ϊ   " << abc->mann[i].Handynr << "\t";
			cout << "��ϵ�˵�ַΪ   " << abc->mann[i].Adress << endl;

			system("pause");
			
			return i;

		}
		
	}
	cout << "���޴���" << endl;
	system("pause");
	
	return -1;

}