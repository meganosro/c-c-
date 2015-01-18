#include<iostream>

#define maxs(a,b) ((a>b) ? (a):(b))
#define swap(v,i,j) {\
						cout<<( v[i] > v[j] );\
}

using namespace std;



int main()
{
	int a[] = {5,6,4,3,2,1,7};
	//cout<<maxs(10,5);
	swap(a,1,5);
	system("pause");
	return 0;
}