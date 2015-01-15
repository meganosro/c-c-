#include<iostream>

using namespace std;

int getbits(int x,int y,int z,int q);
int getbits2(int x,int y,int z);

int main()
{
//	cout<< -(~ 5);
	//cout<<0x177;
	//cout << ( ~ 8 );
	cout<<getbits(156,4,2,7);
	//cout<<getbits2(156,4,3);
	system("pause");
	return 0;
}

int getbits(int x,int y,int z,int q){

	return ( ( x >> y ) & (~(~0 << z) & (q >> y) ) );
}


int getbits2(int x,int y,int z){

	//return ( (x>>(y + 1 - z)) & ~(~0 << z) );
	return ( (x>>(y) ) & ~( ~0 << z  ) );
}