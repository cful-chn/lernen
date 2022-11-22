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
		jiemian();//菜单界面
		cout << "请输入您的需求" << endl;
		int fanhui;
		int fanhuixiugai;

		
		cin >> gongneng;
		

		switch (gongneng)
		{
		case 1:
			addlianxiren(&abc);
			break;
		
		case 2:;//显示联系人
			xianshi(&abc);
			
			break;
		case 3:;//删除联系人
			fanhui = chazhao(&abc);
			cout << "即将删除此人" << endl;
			system("pause");
			shanchu(&abc, fanhui);
			break;
		case 4:;//查找联系人
			chazhao(&abc);
			break;
		case 5:;//修改联系人
			fanhuixiugai =chazhao(&abc);
			xiugai(&abc, fanhuixiugai);

			break;
		case 6:;//清空联系人
			qingkong(&abc);
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
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