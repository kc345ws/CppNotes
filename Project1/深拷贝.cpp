//#include<iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	int *a;
//	CStu()
//	{
//		a = new int[3];
//		a[0] = 12;
//		a[1] = 13;
//	}
//
//	~CStu()
//	{
//		delete[]a;
//	}
//
//	CStu(const CStu& b)
//	{
//		//没有指针成员不用深拷贝
//		//this->a = b.a; 浅拷贝复制指针引用崩溃
//		//申请空间
//		//指针成员不能直接赋值，要用内存拷贝，memcpy,strcpy等
//		this->a = new int[2];
//		/*this->a[0] = b.a[0];
//		this->a[1] = b.a[1];*/
//		//memcpy(this->a,b.a,2*sizeof(int)); 
//	}
//};
//
//CStu fun(CStu& a)//避免拷贝构造
//{
//	return a;
//}
//
//int main()
//{
//	CStu at;
//	cout << at.a[0] << " " << at.a[1] << " " << endl;
//	CStu st = at;
//	cout << st.a[0] << " " << st.a[2] << " " << endl;
//	return 0;
//}