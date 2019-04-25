

#include "pch.h"
#include <iostream>
#include "Test1_Call.h"
#include "Test3_Call.h"

using namespace std;

int main()
{
	printf("====== 开始调用 ======\n");

	//Test1_Call *p = new Test1_Call();
	Test3_Call *d = new Test3_Call();
	//p->Show();
	d->Take();

	//delete p;
	delete d;
	//p = NULL;
	d = NULL;
	

	//实例化
	Test1_Call t;  
	//调用实例化成员函数
	t.Show();


	//Test1_Call a;
	//a.Show();
	



	printf("====== 调用结束 ======\n");
	system("pause");
	return 0;
}


