#ifndef __FUNC2_H__ 
#define __FUNC2_H__ 
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
//  这个头文件应该是包含iota函数的#include <stdlib.h>

void func2(void);
void add(void);
char Arithmetictypes_add_0to1(char aa);
char* pArithmetictypes_add_0to1(char *aa);
int digit(int x);
int Arithmetictypes_add_1to2(int aa,int bb,int cc,int *dd);
int Arithmetictypes_add_special_0to1(int aa,int bb,int cc,int dd,int ee,int *y);
static void itoa1 (int n,char s[]);


typedef enum
{
input_err =0,
input_success,
}input_E;

typedef enum
{
one_assignment  =0,
Infrontofall_assignment,
}Matching_assignment_E;

typedef enum
{
match_notfind =0,
match_find,
}matchfind_result_E;
#endif	// __FUNC2_H__