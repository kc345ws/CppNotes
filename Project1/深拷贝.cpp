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
//		//û��ָ���Ա�������
//		//this->a = b.a; ǳ��������ָ�����ñ���
//		//����ռ�
//		//ָ���Ա����ֱ�Ӹ�ֵ��Ҫ���ڴ濽����memcpy,strcpy��
//		this->a = new int[2];
//		/*this->a[0] = b.a[0];
//		this->a[1] = b.a[1];*/
//		//memcpy(this->a,b.a,2*sizeof(int)); 
//	}
//};
//
//CStu fun(CStu& a)//���⿽������
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