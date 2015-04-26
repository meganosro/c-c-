/*
*/
#include<iostream>
#include <string>
using namespace std;

int main()
{
	char a[] = "one;two;thre";
	//cout<<strcmp("1","1");
	char *c = strtok(a,"; ,");
	cout<<c;
	system("pause");
	return 0;
}


/*
//#include <stdio.h>
#include <string>
#include<iostream>

int main ()
{
  char str[] ="- This, a sample string.";
  char * pch;
  //printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = strtok(str," ,.-");
  while (pch != NULL)
  {
   // printf ("%s\n",pch);
	  std::cout<<pch<<"\n";
    pch = strtok(NULL, " ,.-");
  }
  system("pause");
  return 0;
}
*/