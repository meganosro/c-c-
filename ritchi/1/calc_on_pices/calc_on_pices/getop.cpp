
#include "hed.cpp"

int n = 0;//count valuue in args
double args[MAXARGS];

//return last add value
double pop(void){
    return ( n != 0 ) ? args[--n] : -1;
}

void push(double d){
    if( n < MAXARGS ){
        args[n++] = d;
    }else{
      //  throw new Erorr();
    }
}

void clear(void){
    if( n != 0 ){
        int i = 0;
        while( args[i] ){
            args[i] = 0;
            i++;
        }
    }
}

double top(void){
    return (n != 0 ) ? args[n - 1] : -1;
}