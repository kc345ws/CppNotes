//#include<iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	int b;
//	int& a;
//	const int e;
//	//引用和const必须进行初始化
//	CStu(int& c) : a(b), b(c) , e(124124) //初始化列表与所在构造函数绑定
//	{
//
//	}
//
//	void show()
//	{
//		cout << a << " " << b << " "<< e << endl;
//	}
//};
//
//int main()
//{
//	int d = 12;
//	CStu stu(d);
//	stu.show();
//}