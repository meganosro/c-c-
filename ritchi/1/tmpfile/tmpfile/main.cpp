#include<iostream>

using namespace std;

int main()
{
	FILE *a = tmpfile();
	cout<<"name=("<<tmpnam(NULL)<<")";
	system("pause");
	return 0;
}