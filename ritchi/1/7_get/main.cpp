/* 
 * File:   main.cpp
 * Author: burtsev
 *
 * Created on 28 января 2015 г., 14:23
 */

#include <cstdlib>
#include<stdio.h>
#include<iostream>

using namespace std;
char getword(char *c){
    char c1,*c2 = c;
    while( isalpha(*c2++ = getchar())  ){
        //c2++;
        
    }
    *c2 = '\0';
    return c[0];
}
/*
 * 
 */
int main(int argc, char** argv) {
    char c[20];
    while( getword( c ) != '\n' ){
        cout<<c<<"\n";
    
    }
    return 0;
}

