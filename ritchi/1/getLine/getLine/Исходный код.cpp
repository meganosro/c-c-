//#include<iostream>
#include<stdio.h>

#define FLEN 10
int b = 10;
//using namespace std;
int getline(char mega[]){
	char m = NULL;
	int i = 0,len = FLEN;
	while( m = getchar() ){
		++i;
		if( len < i ){
			len = len + 10;
			//char args[len] = ;
		}
	}
	return i;
}
int main(){
	char c[FLEN];
	//while( getline( c ) > 0 ){

	//}
	extern int b;
	printf("%d",b);
	getchar();
	//system("pause");
	return 0;
}