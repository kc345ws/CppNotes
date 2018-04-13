//#include<iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	int a;
//	int b;
//	int c;
//	double d;
//
//	int nerror;
//	CStu()
//	{
//		a = 12;
//		b = 23;
//		c = 34;
//		d = 45;
//		nerror = -1;
//	}
//
//	//int& operator[](int n) //返回指针可以修改double
//	//{
//	//	switch (n)
//	//	{
//	//	case 0:
//	//		return a;
//	//	case 1:
//	//		return b;
//	//	}
//	//	return nerror;
//	//}
//
//	void* operator[](int n)
//	{
//		switch (n)
//		{
//		case 0:
//			return& a;
//		case 1:
//			return&d;
//	
//		}
//		return &nerror;
//	}
//};
//
//
//int main()
//{
//	//int a[10] = { 1,3,5 };
//	//a[1] = 13; //*(a+1)=13;
//	CStu st; //st[1]
//	cout << st[1] << endl;
//	
//	cout << st[1] << endl;
//
//	cout << *(double *)st[1];   //void无确定大小  ==》void * ==>
//	*(double *)st[1] = 15;
//	return 0;
//}