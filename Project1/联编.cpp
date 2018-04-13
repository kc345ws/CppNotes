//#include<iostream>
//using namespace std;
//
//class CA
//{
//public:
//	virtual void fun()
//	{
//		cout << "CA" << endl;
//	}
//};
//
//class CE : public CA
//{
//public:
//	void fun()
//	{
//		cout << "CE" << endl;
//	}
//};
//int main()
//{
//	/*CA a;
//	a.fun();*/
//
//	CA* a = new CE;
//	a->fun();
//
//	int b;
//	cin >> b;
//
//	switch (b) 
//	{
//	case 1: a = new CA; break;
//	case 2: a = new CE; break;
//	}
//
//	a->fun(); //动态联编，程序运行时才关联起来
//
//	return 0;
//}