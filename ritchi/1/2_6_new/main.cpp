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
void invert(int x,int p,int n);
unsigned char Invert(unsigned char x) ;
unsigned setbits3(unsigned x, int p, int n, unsigned y);
unsigned invert2(unsigned x, int p, int n);
/*
 * 
 */
int main(int argc, char** argv) {
    //getbits(16,2,3);
   //setbits( 182,2,3,121 );
    //cout<<short;
   // cout<<setbits3( 166,2,3,121 );
    invert(121,2,3);
    cout<< "\n" <<invert2(121,2,3);
    //cout<<(int)Invert(22);
    getchar();
    return 0;
}
unsigned setbits3(unsigned x, int p, int n, unsigned y)
  {
      return ( (~0 << (p+1)) & x ) | ( ~(~0 << (p+1-n)) & x ) | 
              (~(~0 << n) & y) << (p+1-n);
  }

void setbits(int x,int p,int n,int y){
    int n1 = 0;
    /* 
    int n1 = 0,n2 = 0;
    
    n1 = ( y >> p ) & ~(~0 << n + 1 );
    n1 = (n1 << p);
    n1 = n1 | ( x & ~(~0 << p  ) );
    n2 = ( x >> p + n + 1 );
    n2 = n2 << p + n + 1;
    n1 = n1 | n2;
    //n1 = n1 | n2;
   */
   // n1 = (~(~0 << (p)) & x) | (  );
   // char c =   x >> p + n ;
    n1 = ((~0)<< (p + 1) & x) | (~(~0 << (p)) & x) | (y >> p) & ~( ~0 << n ) ;
   // n1 =  ((~0) << (p + n - 1 ) & x) ;
    cout << n1 << " -- " <<"\n";
}

void getbits(int i1 ,int i2,int i3){
    int n = 0;
    n = ( i1 >> (i2+1 ) ) & ~( ~0 << i3 );
    cout<<n;
}





void invert(int x,int p,int n){
    int n1 = 0;
   
    int c = 256;
    int r = 0;
    int iter = 0;
    n1 = ~( ~0 << n ) & ( x >> p  );
    
    int x1 = n1;
    while(x1 != 0){
        r += (x1 & 1) * (c>>=1);
       // if((x1 & 1) != 0) iter++;
        x1>>=1 ;
        
    }
   /*
    for(int i=7;i>=0;--i){
        
            r += (x1 & 1) * (1 << i);
        x1>>=1;
      
    } */
    //cout<<"\n"<<(1 << 7);
    n1 = (r >> (8 - n) << p ) | ( x & ~(~0 << p) ) | ( x & (~0 << p + n) );
   // n1 = ( x & (~0 << p + n) );
    cout<<"\n"<<  n1;
    
    //n1 = r 
    
    //cout<< r >> 
}



  unsigned invert2(unsigned x, int p, int n)
  {
      return ( ((~x >> (p+1-n)) & ~(~0 << n)) << (p+1-n) ) |
              (~( ((~0 >> (p+1-n)) & ~(~0 << n)) << (p+1-n) ) & x);
  }



unsigned char Invert(unsigned char x) 
{        
    int base = 256;

    unsigned char  res = 0;
    while (x != 0) 
    {
        res += (x & 1) * (base >>= 1);
        x >>= 1;
    }

    return res;
}
