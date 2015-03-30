#include<iostream>

using namespace std;

class a{
public:
	int c;
};


class b : public a{
public:
	int c1;
	int mega(int bs){

	};
};

int main()
{
	//char c = 0;
	//char *a = "mega hello";
	//char *b = a+4;
	//cout<<(char*)c;
	b *b1 = new b();
	b1->c = 2;
	b1->c1 = 3;
	//void *cc = b1;
	//((void)b1);
	void *c = ((void*)b1);
	cout<< ((b*)c)->c << endl;
	
	//cout<< ((b)b1).c << endl;
	//cout<< ((b)b1).c1 << endl;
	//cout<<b - a<<"\n";
	//cout<<"\n"<<a<<endl;
	system("pause");
	return 0;
}