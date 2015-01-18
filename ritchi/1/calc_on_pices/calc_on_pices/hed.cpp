#include <cstdlib>
#include<iostream>
#include<stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>

//#include "map.cpp"

#define MAXARGS 100



void push(double);
double pop(void);
int getStr(char c1[]);
char getch();
void ungetch(char c);
double top(void);
void clear(void);