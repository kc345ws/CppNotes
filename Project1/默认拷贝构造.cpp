//#include<iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	int b;
//	char c[4];
//
//	CStu()
//	{
//		b = 12;
//		c[0] = 'a';
//		strcpy(c, "abc"); 
//	}
//
//	CStu(const CStu& a) //系统默认拷贝构造为浅拷贝
//	{
//		this->b = a.b;
//		strcpy(this->c, a.c);
//	}
//};
//int main()
//{
//	CStu st;
//	cout << st.b << " " << st.c << endl;
//	CStu st1 = st;
//	cout << st1.b << " " << st.c << endl;
//}
//
////默认的赋值构造函数，逐个复制非静态成员(成员的复制称为浅复制)，复制的是成员的值