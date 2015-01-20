/* 
 * File:   main.cpp
 * Author: burtsev
 *
 * Created on 20 января 2015 г., 9:53
 */

#include <cstdlib>
#include<iostream>
#include<stdio.h>

using namespace std;
void asd( char a[][3] );
void addL(char *a,char *b){
    while( *a != '\0' ){
        a++;
    }
    --*a = *b;
    while( *b != '\0' ){
        *a++ = *b++;
    }
    *a = '\0';
}
/*
 * 
 */
int main(int argc, char** argv) {
    char a[30] = "asdasdasd" ;
    char b[5] = "1234";
    //a[10] = "asdasd";
    //char * b = &a[2];
    addL(a,b);
    cout<<a;
    //cout<< ( b - a  );
    getchar();
    return 0;
}

