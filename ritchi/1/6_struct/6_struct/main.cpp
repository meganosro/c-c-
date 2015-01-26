#include<iostream>

using namespace std;

struct a{
	
	int c;
} p;

class b{
	int c;
};

void mega(a *a1){
	(*a1).c = 20;	
}

int main()
{
	a b1 = {10};
	mega(&b1);
	p.c = 22;
	cout<<b1.c;
	system("pause");
	return 0;
}