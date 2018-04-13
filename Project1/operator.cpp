//#include<iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	int nAge;
//	double dScore;
//
//	CStu()
//	{
//		nAge = 12;
//		dScore = 12.12;
//	}
//};
//
////运算符重载
//void operator+(CStu& st, int a) //引用避免拷贝构造
//{
//	cout << (st.nAge + a) << endl;
//
//}
//
//void operator+(int a, CStu& st)
//{
//	cout << (st.nAge + a) << endl;
//}
//
////void operator+(int a, int b)    //运算符重载必须有一个类
////{
////	cout << (st.nAge + a) << endl;
////}
//
//
//
//int main()
//{
//	CStu st1, st2;
//	/*st1 + st2;*/ //对象不允许直接运算
//	st1 + 12; //运算符重载参数类型一一对应不能交叉
//	12 + st2;
//	return 0;
//}