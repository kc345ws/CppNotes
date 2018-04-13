//#include<iostream>
//using namespace std;
//
//class CStu
//{
//public:
//	int nAge;
//	int* pp;
//	CStu()
//	{
//		cout << "构造函数" << endl;
//		pp = new int(10); //必须delete手动释放
//	}
//	~CStu() //析构函数前需要加~，只有一个没有参数，不能重载，默认析构函数类比构造函数什么都不做，在对象声明周期结束时，自动调用
//	{
//		cout << "析构函数" << endl;
//		delete pp; //通常在析构函数释放
//	}
//};
//
//int main()
//{
//	//CStu stu;
//	//CStu* stu = new CStu;
//
//	CStu(); //临时对象 CStu tu(12); 作用域只在这一行
//	int b = 12; //直接赋值
//	int c = int(12); //先构造一个临时对象再赋值
//	//delete stu;//指针析构函数遇到delete才执行
//
//
//
//	return 0;
//}