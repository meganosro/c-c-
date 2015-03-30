
#include<iostream>

using namespace std;

int main()
{
	FILE *file = fopen("1.txt","r");
	//regex_match(
	if( file != NULL ){
		cout<<"open file\n";
		char a[1000],*c = new char[20];
		while( ( fgets(a,1000,file)) ){
			cout<<a<<endl;
		}
		fclose(file);
	}else{
		cout<<"cant open file";
	}
	
	system("pause");
	return 0;
}