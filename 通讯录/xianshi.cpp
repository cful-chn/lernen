#include"xianshi.h"

void xianshi(tongxunlu* abc)
{
	if (abc->size == 0)
	{
		cout << "��ǰû�м�¼" << endl;
	}
	else {
		for (int i = 0; i < abc->size; i++)
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

		}

	}
	system("pause");
	

}
