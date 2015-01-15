#include<iostream>
#include<ctype.h>

int atoi1(char a[]);
char * lover(char c[]);

using namespace std;

int main()
{
//	char c[5] = {'1','9','2','9','8'};
	char c2[5] = {'A','B','C','D'};
	char c3[5] = "MEGA";
	//cout<<"int="<<atoi(c);
	//cout<<atoi(c);
	//printf("\n %d , %d",'A','a');
	//cout<<"lover="<<lover(c2)<<"--end";
	//cout<<"\n"<<strlen(c2);
	//printf("\n%s",lover(c2));
	//cout<<"\n"<<strlen(lover(c2));
	//cout<<"\n"<<strlen(c2);
	
	cout<<lover(c3);
	cout<<"\n"<<lover(c2);
	cout<<"\n="<<(-1UL > 1U);
	system("pause");
	return 0;
}

char* lover(char c[]){
	//char c1[5];
	for(int i=0;i<5 && c[i] >= 'A' && c[i] <= 'Z';++i){
		c[i] = c[i] + 'a' - 'A';
	}
	return c;
}

int atoi1(char a[]){
	int n = 0;
	for( int i=0;a[i] >= '0' && a[i] <= '9';++i ){
		n = ( n * 10 ) + ( a[i] - '0' );
	}
	return n;
}
