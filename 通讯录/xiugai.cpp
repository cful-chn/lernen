#include"xiugai.h"

void xiugai(tongxunlu* abc, int i)
{
	if (i != -1)
	{
		cout << "���ڽ�����ϵ���޸�" << endl;
		//��������
		string mingzi;
		cout << "����������:  " << endl;
		cin >> mingzi;
		abc->mann[i].ganzname = mingzi;
		//�����Ա�
	FLOG:
		int xingbiexuanze;
		cout << "�������Ա���������1��Ů������2" << endl;
		cin >> xingbiexuanze;
		if (xingbiexuanze == 1 || xingbiexuanze == 2)
		{
			abc->mann[i].sex = xingbiexuanze;
		}
		else {
			cout << "ֻ������1(����)��2(Ů��)������������" << endl;
			goto FLOG;
		}

		//��������
		int nianlingshuru;
		cout << "����������" << endl;
		cin >> nianlingshuru;
		abc->mann[i].age = nianlingshuru;

		//����绰����
		int dianhuahaoshuru;
		cout << "������绰����" << endl;
		cin >> dianhuahaoshuru;
		abc->mann[i].Handynr = dianhuahaoshuru;
		cin.clear();
		cin.ignore(100, '\n');
		//�����ַ
		string dizhishuru;
		cout << "�������ַ" << endl;
		cin >> dizhishuru;
		abc->mann[i].Adress = dizhishuru;

		cout << "�޸ĳɹ�" << endl;

		cin.clear();
		cin.ignore(100, '\n');
		system("pause");
		system("cls");
	}
}