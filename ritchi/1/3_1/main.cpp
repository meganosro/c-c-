/* 
 * File:   main.cpp
 * Author: burtsev
 *
 * Created on 13 января 2015 г., 9:30
 */

#include <cstdlib>
#include<iostream>
#include<stdio.h>

using namespace std;
int searchArg(int x,int arg[],int n);
void escape(char c1[],char c2[]);
void expand(char c1[],char c2[]);
bool dig(char c);
char* mega(char c1[],int n);
/*
 * 
 */
int main(int argc, char** argv) {
    //int arg[10] = {1,2,3,4,5,6,7,8,9}; 
    //cout<<searchArg(5,arg,10);
    char c1[14] = "d-t\0";
    char c2[45];
  //  escape(c1,c2);
    expand(c1,c2);
    cout<<"line1='"<<c1<<"'";
    cout << "\n--" <<c2;
    getchar();
    return 0;
}
bool dig(char c){
    return (c >= 'a')?(c <= 'z')?true:false :false; 
}
char* mega(char c1[],int n){
    char c2[10];
    for(int i=n;i<20;++i){
        if( dig(c1[i]) ){
            
        }
    }
    return c2;
}

void expand(char c1[],char c2[]){
    int j = 0,i = 0;
    char c3[10] = "";
    char c;
    for( i=0;c1[i]!= '\0';++i){
        //cout<<dig(c1[i]);
        if( dig(c1[i]) == true ){
            //c3[j++] = c1[i];
            c = c1[i];
            if(c1[i + 1] == '-' && dig( c1[i + 2] ) == true){
               // c2[j] = c;
                while(c <= c1[i + 2]){
                    c2[j] = c++;
                    j++;
                }
                
            }
        }
     //   cout<<c1[i];
    }
    c2[j] = '\0';
    cout<<"i='"<<i<<"'"<<" j="<<j;
}
void escape(char c1[],char c2[]){
   // char c;
    //while( ( c = getchar() ) != EOF ){
    int j = 0;
    for(int i=0;c1[i]!=EOF;++i,++j){
        
        switch(c1[i]){
            case '\n':
                c2[j++] = '\\';
                c2[j] = 'n';
                break;
            case '\t':
                c2[j++] = '\\';
                c2[j] = 't';
                break;
            default:
                c2[j] = c1[i];
                break;
        }
        
    }
    //c1[0];
    c2[j - 1] = '\0';
    //}
}



int searchArg(int x,int arg[],int n){
    int low = 0,leading = n - 1;
    int mid = 0;
    //cout<<leading;
    while( low != leading ){
        mid = ( low + leading ) / 2;
       // cout<<mid;
        if( arg[mid] > x ){
            leading = mid - 1;
            cout<<"_1_";
        }else if( arg[mid] < x ){
            low = mid + 1;
            cout<<"_2_";
        }else{// if( arg[mid] == x )
            cout<<"_3_";
            return mid;
        }
    }
    return -1;
}