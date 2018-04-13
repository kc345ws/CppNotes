//#include<iostream>
//using namespace std;
//
//class CFather
//{
//public:
//
//
//	 virtual ~CFather()
//	{
//		cout << "CFahter" << endl;
//	}
//
//};
//
//class CSon : public CFather
//{
//public:
//	 virtual ~CSon()
//	{
//		cout << "CSon" << endl;
//	}
//	 
//	
//};
//
//class CXiaoMing 
//{
//public:
//	~CXiaoMing()
//	{
//		cout << "CXiaoMing" << endl;
//	}
//};
//
//int main()
//{
//
//	CFather* fa = new CSon;
//	//delete (CXiaoMing *)fa; //delete释放什么类型就调用谁的析构函数
//	//不管调用谁的析构函数空间都会释放
//	return 0;
//}