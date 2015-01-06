#include<iostream>

#define MAXLEN 40

using namespace std;

int getline(char a[]);

int main()
{
	char str[MAXLEN];
	int i = getline(str);
	printf("\nline=%s,%d",str,i);
	printf("END");
	system("pause");
	return 0;
}

int getline(char a[]){
	char c;
	int i = -1,j = 0;
	while( (c = getchar()) != '\n'){
		a[++i] = c;
	}
	//return MAXLEN;
	int iter = 0;
	if( i != MAXLEN ){
		for( j = i;j < MAXLEN;++j ){
			a[j] = '_';
			iter++;
		}
	}
	return i + iter;
}