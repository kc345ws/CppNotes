//#include<iostream>
//using namespace std;
//
//class CFather
//{
//public:
//	 virtual void Show() //虚函数 子类用同名的则调用子类的
//	{
//		cout << "class CFather" << endl;
//	}
//};
//
//class CSon : public CFather
//{
//public:
//	int aa;
//	void Show()
//	{
//		cout << "class CSon" << endl;
//	}
//};
//
//class CSon1 : public CFather //多个子类，换子类就调用子类的
//{
//public:
//	int aa;
//	void Show()
//	{
//		cout << "class CSon1" << endl;
//	}
//};
//int main()
//{
//	CFather* fa = new CSon1; // 虚函数:父类的指针，调用子类的函数
//	//指向谁就调用哪个子类
//	fa->Show(); //普通的只能调用父类的成员
//
//	int*a = new int;
//	return 0;
//}