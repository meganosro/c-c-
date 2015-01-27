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

struct mega1{
	mega1(){};
	char *name;
	int count;
	mega1 *left;
	mega1 *right;
};

char *strcc(char * c2){
	//char *p = (char *)malloc(strlen(c2) + 1);
	char *p = new char[strlen(c2) + 1];
	strcpy(p,c2);
	return p;
}

mega1 *addStru(mega1 *a,char *word){
	int as = 0;
	if(a == NULL){
		a = new mega1();
		a->name = strcc(word);
		a->count = 1;
		a->left = NULL;
		a->right = NULL;
		//cout<<a->name;
		//cout<<"_1_";
	}
	as = strcmp(word,a->name);
	//cout<<"as='"<<as<<"'"<<word<<"'=='"<<a->name<<"'";
	if( as < 0 ){
		//cout<<"as="<<as;
		a->left = addStru(a->left,word);
		//cout<<"_2_";
	}
	if( as > 0 ){
		//cout<<"as="<<as;
		a->right = addStru(a->right,word);
		//cout<<"_3_";
	}
	return a;
}

void disp(mega1 *a){
	//cout<<"true='"<< (a == NULL)<<"'";
	if( a != NULL ){
		
		disp(a->left);
		cout<<"disp="<< a->name<<"\n";
		disp(a->right);
	}
	
}


char getword(char *c){
	//char c1;
	char *c1 = c;
	while( isspace(*c1 = getch()) );

	//if( isalpha( *c1 ) ){
	//}
	c1++;
	while( isalpha( *c1 = getch()) ){
		c1++;
	}
	putch(*c1);
	//	cout<<*c;
	*c1 = '\0';
	//cout<<"c='"<<c[1]<<"'";

	return c[0];
}



int main()
{
	char m[50],c;
	mega1 *a = NULL;
	int i = 0;
	char c1[20] = "mega\0",*c2 = "asd";
	strcpy(c1,c2);
	//cout<<c1<<"--"<<c2;
	while( (c = getword(m)) != '\n' ){

		//cout<<"c="<<c<<"\n";
		if( c == '1' ){
			disp(a);
		}
		if( isalpha(c) ){
			i++;
			//cout<<"\ni="<<i<<"\n";
			//if(c != '1')
			//cout<<"\n//////__1__";
			//disp(a);
			//cout<<"\n//////";
			a = addStru(a,m);
			//cout<<"\n//////__2__";
			//disp(a);
			//cout<<"\n//////";
		}
		
		//cout<<m<<"\n";
	}
	cout<<"\ni="<<i<<"\n";
	system("pause");
	return 0;
}