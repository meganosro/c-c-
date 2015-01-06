/* 
 * File:   main.cpp
 * Author: burtsev
 *
 * Created on 5 января 2015 г., 9:20
 */

#include <cstdlib>
#include<stdio.h>
#include<iostream>

using namespace std;

#define MAXLEN 40
#define MAXTABS 2

int getline(char a[]);
void disp(char a[]);
void replace(char a[],char b[]);
void replace2(char a[],char b[]);
/*
 * 
 */
int main() {
    char str[MAXLEN],str2[MAXLEN * 2];
    
    //cout<< "line1=" << str <<endl;
    int i  = 0;
    //= getline(str);
    while( (i = getline(str)) != EOF ){
        replace2(str,str2);
       // printf("\nline=%s , %d --END\n",str,i);
         printf("\nline=%s --END\n",str2);
    }
    //printf("\nline=%s , %d --END",str,i);
   // cout<<str << endl;
    getchar();
    return 0;
}

void replace(char a[],char b[]){
    int i = 0;
    while( a[i] ){
        if( a[i] == '\t' ){
            for( int j = 0;j<MAXTABS;++j,++i){
                b[i] = '-';
            }
        }
        b[i] = a[i];
        ++i;
    }
}

void replace2(char a[],char b[]){
    for( int i=0;i<MAXLEN;++i ){
        if( a[i] == ' ' && a[i+1] == ' ' ){
            b[i] = '\t';
            b[i+1] = '\0';
        }else{
             b[i] = a[i];
        }
    }
   
}

void disp(char a[]){
    int i = 0;
    while( a[i] && i < MAXLEN ){
        cout<<a[i];
        i++;
    }
    cout<<i;
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
