#include "tianjia.h"

//�����ϵ��
void addlianxiren(tongxunlu* abc)
{
	if (abc->size == Max)
	{
		cout << "ͨѶ¼����" << endl;
		return;
	}
	else {
		//��������
		string mingzi;
		cout << "����������:  " << endl;
		cin >> mingzi;
		abc->mann[abc->size].ganzname = mingzi;
		//�����Ա�
	FLOG:
		int xingbiexuanze;
		cout << "�������Ա���������1��Ů������2" << endl;
		cin >> xingbiexuanze;
		if (xingbiexuanze == 1 || xingbiexuanze == 2)
		{
			abc->mann[abc->size].sex = xingbiexuanze;
		}
		else {
			cout << "ֻ������1(����)��2(Ů��)������������" << endl;
			goto FLOG;
		}
		
		//��������
		int nianlingshuru;
		cout << "����������" << endl;
		cin >> nianlingshuru;
		abc->mann[abc->size].age = nianlingshuru;

		//����绰����
		int dianhuahaoshuru;
		cout << "������绰����" << endl;
		cin >> dianhuahaoshuru;
		abc->mann[abc->size].Handynr = dianhuahaoshuru;
		cin.clear();
		cin.ignore(100, '\n');
		//�����ַ
		string dizhishuru;
		cout << "�������ַ" << endl;
		cin >> dizhishuru;
		abc->mann[abc->size].Adress = dizhishuru;

		cout << "��ӳɹ�" << endl;
		abc->size++;
		cin.clear();
		cin.ignore(100, '\n');
		system("pause");
		system("cls");
		

	}
}