/* 
 * File:   main.cpp
 * Author: burtsev
 *
 * Created on 5 января 2015 г., 9:20
 */

#include <cstdlib>
#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;

#define MAXLEN 40
#define MAXTABS 2

enum megas {zero,one,two};

int getline(char a[]);
void replaceComment(char a[],char b[]);
bool checkScope(char a[],int iter,char val);
/*
 * 
 */
int main() {
    char str[MAXLEN],str2[MAXLEN ],str3[MAXLEN ];
    char mega[10] = {'a','b','c'};
    //cout<<strlen(mega)<<" " << megas.one;
    //cout<< "line1=" << str <<endl;
    int i  = 0;
    //= getline(str);
    while( (i = getline(str)) != EOF ){
        replaceComment(str,str2);
        cout<<"\ncheck="<<checkScope(str2,0,' ')<<"\n";
       // printf("\nline=%s , %d --END\n",str,i);
         printf("\nline=%s --END\n",str2);
    }
    //printf("\nline=%s , %d --END",str,i);
   // cout<<str << endl;
    getchar();
    return 0;
}

bool checkScope( char a[],int iter,char val  ){
    bool _bool = false;
   // char b[MAXLEN];
    switch( val ){
        case '(':
            val = ')';
            break;
        case '{':
            val = '}';
            break;
    }
    if(iter > 0){
        ++iter;
    }
    for(int i=iter;i<MAXLEN;++i){
        switch(a[i]){
            case '(':
            case '{':
                //cout<<"(||{";
                _bool = checkScope(a,i,a[i]);
                break;
            case ')':
            case '}':
               // cout<<")||}";
                if( val == a[i] ){
                    _bool = true;
                }
                break;
            //default:
               // _bool = false;
        }
    }
   /* */
    return _bool;
}

void replaceComment(char a[],char b[]){
    int j = -1;
    for(int i=0;i<MAXLEN;++i){
        if( a[i] == '/' && a[i+1] == '*' ){
            i+=2;
            while( ((a[i] != '*') && (a[i+1] != '/') ) ){
                //cout<<"_";
                ++i;
            }
            ++i;
        }else{
            b[++j] = a[i];
        }
    }
}

/*
 * 
 */
int getline(char a[]){
    char c;
    int i = -1,j = 0;
    while( (c=getchar()) != '\n' ){
        if( i >= MAXLEN ){
            return i;
        }
        a[++i] = c;
    }
    if( i != MAXLEN ){
        for( j=i+1;j<MAXLEN;++j ){
            a[j] = ' ';
        }
    }
    a[MAXLEN - 1] = '\0';
    return j;
}

//int getlen
