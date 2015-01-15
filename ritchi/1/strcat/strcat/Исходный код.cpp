#include<iostream>
#include<ctype.h>

void squeeze(char c1[],char c2[]);
int any(char c1[],char c2[]);
using namespace std;

int main()
{
	char c2[25] = {'A','B','E','D','C','M','B'};
	char c3[5] = {'M','E','G'};
	//char c4[15] = squeeze(c2,c3);
//	squeeze(c2,c3);
	int b = any(c2,c3);
	cout<<"\n\n" <<c2<<" -- "<<c3;
	cout<<"\n\n" <<b;
	system("pause");
	return 0;
}


int any(char c1[],char c2[]){
	int n = -1;
	int i = 0,j = 0;
	while(c1[i] != '\0'){
		j = 0;
		while(c2[j] != '\0'){
			if( c1[i] == c2[j] ){
				return i;
			}
			j++;
		}
		i++;
	}
	//c1[i1] = '\0';
	return n;
}

void squeeze(char c1[],char c2[]){

}

/*
void squeeze(char c1[],char c2[]){
	int i = 0,j = 0,i1 = 0;
	bool t = false;
	while(c1[i] != '\0'){
		j = 0;
		t = false;
		while(c2[j] != '\0'){
			if( c1[i] == c2[j] ){
				t = true;
				break;
			}
			j++;
		}
		if(t == false){
			c1[i1++] = c1[i];
		}
		i++;
	}
	c1[i1] = '\0';
}

void squeeze(char c1[],char c2[]){
	//int i = strlen(c2);
	//cout<<"strlen="<<i;
	int i = 0,j = 0;
	while(c1[i] != '\0'){
		++i;
	}
	while(c2[j] != '\0' ){
		//j++;
		c1[i++] = c2[j++];
		//i++;

	}
	cout<<"\nc1="<<c1<<endl;
	cout << j;
}
*/