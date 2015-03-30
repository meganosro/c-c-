#include<iostream>
#include <dirent.h>

//#include <
using namespace std;

int main()
{
	DIR * dir = opendir(".");
	dirent *d;
	//DIR *dir;
	char c[100];
	while( d = readdir(dir) ){
		cout<< d->d_name <<endl;
	}
	closedir(dir);
	system("pause");
	return 0;
}