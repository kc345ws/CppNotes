//#include<iostream>
//using namespace std;
//
//class CFather
//{
//private:
//	int b;
//
//public:
//	int a;
//	CFather()
//	{
//		a = 12;
//	}
//
//	void Show()
//	{
//		cout << "CFather" << endl;
//	}
//
//	friend void Show();
//};
//
//void Show()
//{
//	CFather ft;
//	cout << ft.b << endl;
//}
//
//
//class CSon : public CFather
//{
//private:
//	int c;
//
//public:
//	int a;
//	CSon()
//	{
//		a = 10;
//		c = 12;
//	}
//
//	void Show() //子类同名会覆盖父类同名
//	{
//		/*cout << CFather::a << endl;
//		cout << a << endl;*/
//		cout << "CSon" << endl;
//	}
//};
//
//void Show()
//{
//	CSon son;
//	/*cout << son.c << endl;*/  //友元不能继承 静态成员所有子类共同继承
//}
//
//int main()
//{
//	CSon son;
//	/*son.Show();*/
//	/*cout << son.a << endl;
//	cout << son.CFather::a << endl;*/
//	son.Show();
//	son.CFather::Show();
//	return 0;
//}