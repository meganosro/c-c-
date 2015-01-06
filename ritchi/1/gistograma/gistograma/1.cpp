//#include<iostream>
#include<stdio.h>

//using namespace std;

int main(){
	char c = '-',c2 = ' ';
	//c = getchar();
	int args[3];
	args[0] = 5;
	args[1] = 2;
	args[2] = 7;
	/**/
	for(int i=7;i>0;--i)
	{
		for(int j = 0; j<3;++j)
		{
			if( args[j] <= i )
			{
				//cout<<c2;
				printf("%c",c2);
			}else{
			//	cout<<c;
				printf("%c",c);
			}
		}
		printf("\n");
	}
	
	//printf("c = %c",'a');
	getchar();
	//system("pause");
	return 0;
}