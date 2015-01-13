/* 
 * File:   main.cpp
 * Author: burtsev
 *
 * Created on 13 января 2015 г., 12:14
 */

#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include<limits.h>

using namespace std;
void itoa(int n,char c[]);
/*
 * 
 */
int main(int argc, char** argv) {
    char c[20] = "";
    itoa(INT_MAX,c);
    cout<<INT_MAX<<endl;
    cout<<"c='"<<c<<"'";
    getchar();
    return 0;
}

void itoa(int n,char c[]){
    //while()
    int i = 0;
    do{
        c[i++] = ( n % 10 ) + '0';
    }while( (n = n/10) != 0 );
    //trim("jkl");
    
            
}