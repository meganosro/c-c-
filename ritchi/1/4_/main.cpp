/* 
 * File:   main.cpp
 * Author: burtsev
 *
 * Created on 13 января 2015 г., 9:30
 */

#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include <string.h>

using namespace std;
int strindex(char c1[],char c2[]);
double atof(char c1[]);
/*
 * 
 */
int i = 10;
void mega();

int main(int argc, char** argv) {
    char c1[15] = "mega as bega";
    char c2[15] = "as";
    char c3[10] = "123.553";
    //cout<<c1<<"--"<<c2;
    //cout<<strstr(c1,c2);
    //cout<<strindex(c1,c2);
    mega();
    cout<<i;
    cout<<123+0.5;
    cout<<"\n////\n";
    cout<<atof(c3);
    
    //cout<<strs
    getchar();
    return 0;
}
void mega(){
    // int i;
    i = 20;
}
/*
  double atof(char s[])
  {
      double val, power, degval, base, exponent;
      int i, sign, degsign;

      for (i = 0; isspace(s[i]); i++);  
      sign = (s[i] == '-') ? -1 : 1;
      
      if (s[i] =='+' || s[i] =='-')
          i++;
      for (val = 0.0; isdigit(s[i]); i++){
          val = 10.0 * val + (s[i] - '0');
      }
      if (s[i] == '.'){
          i++;
      }
      for (power = 1.0; isdigit(s[i]); i++) {
          val = 10.0 * val + (s[i] - '0');
          power *= 10.0;
      }


      return sign * (val / power);
  }
  */

double atof(char c1[]){
    double n = 0.0;
    bool bo = false;
    int iter = 1;
    
    for( int i=0;c1[i] != '\0';++i ){
        double c = 0;
        if( c1[i] == '.' ){
            bo = true;
            continue;
        }
        c = c1[i] - '0';
        if( bo == true ){
            
            c = c / ( iter *= 10);
        }else{
            n = n * 10;
        }
        //cout<<"\ni="<<i<<",c="<<c<<",n="<<n;
        //break;
        n = n + c ;
        
        //cout<<"\ni="<<i<<",c="<<c<<",n="<<n;
    }
    return n;
}
/**/
int strindex(char c1[],char c2[]){
    int i = 0,j = 0, n = 0;
    for(i=0;c1[i] != '\0';++i){
        //cout<<c1[i];
        for(j = i,n = 0; c1[j] == c2[n] && c2[n] != '\0' ;++j,++n){
            
        }
        if( n > 0 && c2[n] == '\0' ){
            return n;
        }
    }
    return -1;
}