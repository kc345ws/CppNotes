#include<iostream>
using namespace std;
int main()
{
	int mark[10], i, j, x;
	double average=0;
	for (i = 0; i < 10; i++)
	{
		cin >> mark[i];
		if (mark[i] > 100 || mark[i] < 0)
		{
			cout << "the score is invalid." << endl;
			exit(0);
		}
	}
	for (i = 0;i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (mark[0] < mark[j])
			{
				x = mark[0];
				mark[0] = mark[j];
				mark[j] = x;
			}
		}
	}
	mark[0] = 0;
	for (i = 1; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (mark[9] > mark[j])
			{
				x = mark[9];
				mark[9] = mark[j];
				mark[j] = x;
			}
		}
	}
	mark[9] = 0;
	for (i = 0; i < 10; i++)
		average += mark[i];
	cout << average / 8 << endl;
	return 0;
}



//题目内容：
//歌唱大赛选手成绩计算方法如下：去掉一个最高分，去掉一个最低分，将剩下分数的平均值作为选手的最后成绩。这里假设共有10位评委，都是按照百分制打分。
//程序运行结果如下：
//88 90 97 89 85 95 77 86 92 83
//88.5
//如果评委给出的成绩不在0~100分之间，将给出错误提示。
//程序运行结果如下：
//101 90 97 89 85 95 77 86 92 83
//the score is invalid.
//输入格式:
//10个[0, 100]之间的数.
//
//输出格式：
//1个可以表示小数的数或者提示信息“the score is invalid.”
//平均值变量使用double型。
//输入样例：
//88 90 97 89 85 95 77 86 92 83
//
//输出样例：
//88.5
//时间限制：2000ms内存限制：32000kb