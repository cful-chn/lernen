#include<iostream>
using namespace std;

#include<string>

#include"jiemian.h"
#include"tianjia.h"
#include"dingyi.h"
#include"xianshi.h"
#include"chazhao.h"
#include"shanchu.h"
#include"xiugai.h"
#include"qingkong.h"






int main() {
	
	tongxunlu abc;
	abc.size = 0;
	
	
	int gongneng = -1;


	while (true)
	{
		system("cls");
		jiemian();//�˵�����
		cout << "��������������" << endl;
		int fanhui;
		int fanhuixiugai;

		
		cin >> gongneng;
		

		switch (gongneng)
		{
		case 1:
			addlianxiren(&abc);
			break;
		
		case 2:;//��ʾ��ϵ��
			xianshi(&abc);
			
			break;
		case 3:;//ɾ����ϵ��
			fanhui = chazhao(&abc);
			cout << "����ɾ������" << endl;
			system("pause");
			shanchu(&abc, fanhui);
			break;
		case 4:;//������ϵ��
			chazhao(&abc);
			break;
		case 5:;//�޸���ϵ��
			fanhuixiugai =chazhao(&abc);
			xiugai(&abc, fanhuixiugai);

			break;
		case 6:;//�����ϵ��
			qingkong(&abc);
			break;
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;

		default:
			
			break;
		}

	}
	
	


	system("pause");
	return 0;
}