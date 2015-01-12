/* 
 * File:   main.cpp
 * Author: burtsev
 *
 * Created on 12 января 2015 г., 12:04
 */

#include <cstdlib>
#include<stdio.h>
#include<iostream>

using namespace std;
void getbits(int i1 ,int i2,int i3);
void setbits(int x,int p,int n,int y);
/*
 * 
 */
int main(int argc, char** argv) {
    //getbits(16,2,3);
    setbits( 166,2,3,121 );
    getchar();
    return 0;
}

void setbits(int x,int p,int n,int y){
    int n1 = 0,n2 = 0;
    
    n1 = ( y >> p ) & ~(~0 << n + 1 );
    n1 = (n1 << p);
    n1 = n1 | ( x & ~(~0 << p  ) );
    n2 = ( x >> p + n + 1 );
    n2 = n2 << p + n + 1;
    n1 = n1 | n2;
    //n1 = n1 | n2;
    
    cout<<n1 << " -- " << n2<<"\n";
}

void getbits(int i1 ,int i2,int i3){
    int n = 0;
    n = ( i1 >> (i2+1 ) ) & ~( ~0 << i3 );
    cout<<n;
}

