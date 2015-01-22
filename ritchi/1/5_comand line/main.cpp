/* 
 * File:   main.cpp
 * Author: burtsev
 *
 * Created on 22 января 2015 г., 10:06
 */

#include <cstdlib>
#include<iostream>
#include<stdio.h>

using namespace std;

/*
 * 
 */

char getStr(char *c1);

void push(int c);
int pop();
int top();

int ss(int a,int b){
    return a+b;
}

void mega( int (*spac)(int a,int b) ){
    cout<<(*spac)(10,15);
}

int main(int argc, char** argv) {
    cout<<"//////\n";
   // cout<< ((*mega(ss))(10,20));
    mega(ss);
    cout<<"//////\n";
    //char *a[] = {"asdasd","asdlaskdasd"};
    char c;
    for( ; --argc > 0 && (c = getStr( *++argv ) ); ){
        //cout<< *++argv << "__";
        switch( c ){
            case '0':
                
                push( atoi( *argv ) );
                //cout<< "get='"<< top() << "'" <<*argv <<"--"<< atoi( *argv );
                break;
            case '+':
                push( pop() + pop() );
                break;
        }
    }
    cout<<"last="<<pop();
    getchar();
    return 0;
}

int args[100];
int n = 0;

int top(){
    return ( n > 0 )?args[n - 1]:-1;
}
void push(int c){
    if( n<100 ){
        args[n++] = c;
    }
}
int pop(){
    return ( n > 0 )?args[--n]:-1;
}

char getStr(char *c1){
    if( !isdigit(*c1)  ){
        return *c1;
    }else{
        return '0';
        
    }
}