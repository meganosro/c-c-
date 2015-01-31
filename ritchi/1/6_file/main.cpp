/* 
 * File:   main.cpp
 * Author: burtsev
 *
 * Created on 29 января 2015 г., 14:09
 */

#include <cstdlib>
#include<stdio.h>
#include<iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    FILE *f = fopen("1.txt","w");
    char line[20];
    cout<<fgets(line,10,f);
    char c;
    if( f == NULL){
        fprintf(stderr,"%s");
        getchar();
        return 0;
    }
    while( (c = getc(f)) != EOF ){
        cout<<c<<"\n";
    }
    fclose(f);
    //cout<<stdout;
    //cout<<getc(stdin);
    putc('c',stdout);
    //getchar();
    getc(stdin);
    
    //getchar();
    return 0;
}

