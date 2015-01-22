/* 
 * File:   main.cpp
 * Author: burtsev
 *
 * Created on 22 января 2015 г., 15:30
 */

#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

/*
 * 
 */

void sorts( char *args[],int n , void (*comp)(char *a,char *b)/**/ ){
    //void *a;
    int i = 0;
    while( args[i] ){
        //cout<< *args <<endl;
        //cout<<args[i++];
        int j = 0;
        while( args[j] ){
            /*
            if( *args[i] > *args[j] ){
                
            //if( strstr(args[i], args[j]) < 0 ){
                char *t = args[j];
                args[j] = args[i];
                args[i] = t;
            }
             * */
           // ( (*comp)(args[i] , args[j] ) );
              (*comp)(args[i] , args[j] ) ;
            j++;
        }
        i++;
    }
}

void mega(char *a,char *b){
    if( *a > *b ){
       char *t = a;
       a = b;
       b = t;
    }
}


int main(int argc, char** argv) {
   // char *b = "asdasdasd";
  //  void *cc = b;
    char *args[3] = {   
        "alskdko",
        "lmkfg",     
        "jie"
    };
    sorts( args ,3,mega);
    int i = 0;
    for(int i=0;i<3;i++  ){
        cout<<args[i]<<"\n";
    }
    getchar();
    return 0;
}

