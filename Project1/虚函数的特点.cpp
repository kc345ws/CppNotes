//#include<iostream>
//using namespace std;
//
//class CFather
//{
//public:
//	//virtual void Show() //重写针对虚函数
//	//{
//	//	cout << "class CFather" << endl;
//	//}
//	virtual CFather& Show()
//	{
//		cout << "class CFather" << endl;
//		return (*this);
//	}
//};
//
//class CSon : public CFather
//{
//public:
//	int aa; //虚函数 指针对成员函数没有效果
//	//子类重写的函数，默认是虚函数，可以显示加virtual
//	/* virtual void Show()
//	{
//		cout << "class CSon" << endl;
//	}*/
//	virtual CSon& Show() //协变返回类型可以不同
//		//虚函数不能是内联函数、构造函数(内联函数)
//	{
//		cout << "class CSon" << endl;
//		return (*this);
//	}
//};
//
////class CSonSon : public CSon
////{
////	int aa;
////	void Show() //返回类型必须相同，参数也必须相同
////	{
////		cout << "class CSonSon " << endl;
////	}
////};
//int main()
//{
//
//	CFather* fa = new CSon;
//	fa->Show();
//	CSon* son = new CSonSon;
//	son->Show();
//
//	return 0;
//}