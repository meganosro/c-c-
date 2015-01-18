#include<iostream>

using namespace std;

void itoa( char c1[],int n ){
	/*
	int i = 0;
	do{
		c1[i++] = n%10 + '0' ;
	}while( n = n/10 );
	c1[i] = '\0';
	*/
	static int i = 0;
	if(n != 0){
		c1[i++] = n%10 + '0';
		itoa(c1,n/10);
	}else{
		c1[i] = '\0';
	}

}

int main()
{
	int i = 147;
	char c1[10] = "";
	itoa(c1,i);
	cout<<c1;
	system("pause");
	return 0;
}