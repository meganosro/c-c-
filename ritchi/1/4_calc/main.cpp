/* 
 * File:   main.cpp
 * Author: burtsev
 *
 * Created on 15 января 2015 г., 10:28
 */

#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include<limits.h>


using namespace std;

#define MAXARGS 100

int n = 0;//count valuue in args
double args[MAXARGS];

int n1 = 0;
char buf[MAXARGS];//buffer

void push(double);
double pop(void);
int getStr(char c1[]);
char getch();
void ungetch(char c);
/*
 * 
 */
int main(int argc, char** argv) {
    char c1[MAXARGS];
    char c;
    /**/
    while( (c = getStr(c1)) != EOF ){
        switch(c){
            case '0':
                push( atof(c1) );
                break;
            case '+':
                push( pop() + pop() );
                break;
        }
    }
    cout<<"\nlast symbols = "<<pop();
    
    //cout<<isdigit('c');
    getchar();
    return 0;
}

char getch(){
    return ( n1 != 0 ) ? buf[--n1] : getchar();
    //return getchar();
}

void ungetch(char c){
    if( n1 < MAXARGS ){
        buf[n1++] = c;
    }
}

int getStr(char c1[]){
    char c;
    int i = 0;
    //cout<<"__1__";
    while( ( c1[0] = c = getch() ) == ' ' && c == '\t' );
    c1[1] = '\0';
    if( !isdigit(c) ){
        return c;
    }
    c1[i++] = c;
    //cout<<"__2__";
    while( (c = getch() ) != '\0' && isdigit(c) ){
        c1[i++] = c;
    }
    if(c == '.'){
        c1[i] = '.';
    //    cout<<"__3__";
        while( (c = getch() ) != '\0' && isdigit(c) ){
            c1[++i] = c;
        }
    }
    c1[i] = '\0';
    //cout<<c;
    if( c != EOF ){
        ungetch( c );
    }
    return '0';
}

//return last add value
double pop(void){
    return ( n != 0 ) ? args[--n] : -1;
}

void push(double d){
    if( n < MAXARGS ){
        args[n++] = d;
    }else{
      //  throw new Erorr();
    }
}
