#include "hed.cpp"

int n1 = 0;
char buf[MAXARGS];//buffer

char getch(){
    return ( n1 != 0 ) ? buf[--n1] : getchar();
    //return getchar();
}

void ungetch(char c){
    if( n1 < MAXARGS ){
        buf[n1++] = c;
    }
}