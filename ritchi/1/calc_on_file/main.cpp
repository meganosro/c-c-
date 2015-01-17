/* 
 * File:   main.cpp
 * Author: burtsev
 *
 * Created on 15 января 2015 г., 10:28
 */

#include<cstdlib>
#include<iostream>
#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
//#include "MAP.cpp"
//#include "MAP.cpp"
//#include "calc.h"
#include "ca.cpp"




/*
 * cpp for main
 */
int main(int argc, char** argv) {
    //cout<<atof("-20");
    char c1[MAXARGS];
    char c;
    double op = 0;
    cout<<"//////\n";
   // map.setargs('M',100);
   // cout<<"M="<<map.getargs('M');
    /*
    char c_[5] = "mega";
 
    cout<<"////\n";
    switch( c_ ){
        case "mega":
            cout<<"MEGA";
            break;
    }
    cout<<"////\n";
    */
    int args[26],nArgs = 0;
    while( (c = getStr(c1)) != EOF ){
        switch(c){
            case '0':
                push( atof(c1) );
                break;
            case '+':
                push( pop() + pop() );
                break;
            case '-':
                op = pop();
                push( pop() - op );
                break;
            case '/':
                op = pop();
                push( pop() / op );
                break;
            case '%':
                op = pop();
                push( (int)op % (int)pop() );
                break;
            case 'p':
                cout<<top();
                break;
            case 'y':
                cout<<pow( pop(),pop() );
              //  cout<<p;
                break;
            case 'i':
                //cout<<pow( pop(),pop() );
                //cout<<top();
              //  cout<<p;
                break;
            case 'c':
                clear();
                break;
            case 'v':
                //if( c >= 'A' && c <= 'Z' ){
                    //cout<<"val='"<<map.getargs(c)<<"'";
                //}
//               cout<<map.getargs(c1[0])<<endl;
                break;
            case 0:
                cout<<"Error!";
                //getchar();
                break;
            default:
                /*
                if( c >= 'A' && c <= 'Z' ){
                    cout<<"val='"<<map.getargs(c)<<"'";
                }*/
                break;
        }
    }
    cout<<"\nlast symbols = "<<pop();
    
    //cout<<isdigit('c');
    getchar();
    return 0;
}




/*
  int getStr(char s[])
  {
      int i=0, c, t;
      while ((s[i] = c = getch()) == ' ' || c == '\t');
      if (!isdigit(c) && c != '.') {
          if (c == '-') {
              if (isdigit(t = getch()) || t == '.') {
                  s[++i] = t;
              }
              else {
                  ungetch(t);
                  return c; 
              }
          }
          else {
              return c;    
          }
      }
      if (isdigit(c))
          while (isdigit(s[++i] = c = getch()));
      if (c =='.')  
          while (isdigit(s[++i] = c = getch()));
      s[i] = '\0';
      if (c != EOF)
          ungetch(c);
      return '0';
  }
*/

bool issome(char c){
    return true;
}

