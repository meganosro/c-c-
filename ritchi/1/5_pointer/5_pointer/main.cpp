#include<iostream>



using namespace std;

int strl(char *c){
	int n = 0;

	for( /*char *i = c*/ ; *c != '\0' ;c++ ){
		n++;
	}

	return n;
}

int main()
{
	char a[] = "987654321";
	//cout<<strl(a);
	cout<<a;
	system("pause");
	return 0;
}