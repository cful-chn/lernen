#include"shanchu.h"

void shanchu(tongxunlu* abc, int i)
{
	if (i != -1)
	{
		for (i; i < abc->size; i++)
		{
			abc->mann[i] = abc->mann[i + 1];
		}
		cout << "��ɾ��" << endl;
		system("pause");

	}

	system("cls");
	abc->size--;
}