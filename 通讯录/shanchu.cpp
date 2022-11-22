#include"shanchu.h"

void shanchu(tongxunlu* abc, int i)
{
	if (i != -1)
	{
		for (i; i < abc->size; i++)
		{
			abc->mann[i] = abc->mann[i + 1];
		}
		cout << "ÒÑÉ¾³ý" << endl;
		system("pause");

	}

	system("cls");
	abc->size--;
}