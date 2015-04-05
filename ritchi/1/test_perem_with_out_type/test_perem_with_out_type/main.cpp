#include<iostream>

//#error 10

using namespace std;

struct a{
	int b;
};

int main()
{
	//a = 100;
	cout<<__DATE__;
	cout<<__LINE__;
	cout<<__FILE__;
	a a1 = {10};
	system("pause");
	return 0;
}