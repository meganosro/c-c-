#include<iostream>
#include<stdio.h>

using namespace std;

int n = 0;
char mega[100];

char getch(){
	return ( n > 0 ) ? mega[--n] : getchar();
}

void putch(char c){
	if( n > 0 ){
		mega[n++] = c;
	}
}

char getword(char *c){
	//char c1;
	while( isspace(*c = getch()) );
	if( isalpha(*c) ){
		//*c = c1;
		c++;
	}
	while( isalpha( *c = getch()) ){
		c++;
	}
	
	*c = '\0';
	//cout<<"c='"<<c<<"'";

	return c[0];
}

int main()
{
	char m[50];
	while( getword(m) != '\n' ){
		cout<<m;
	}
	system("pause");
	return 0;
}