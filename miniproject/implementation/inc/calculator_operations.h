#ifndef CALCULATOR_OPERATIONS_H_INCLUDED
#define CALCULATOR_OPERATIONS_H_INCLUDED
#ifndef __CALCULATOR_OPERATIONS_H__
#define __CALCULATOR_OPERATIONS_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int add(int operand1, int operand2);
int subtract(int operand1, int operand2);
int multiply(int operand1, int operand2);
int divide(int operand1, int operand2);
int prime(int operand1);
int pos(int operand1);
int neg(int operand1);
int iszero(int operand1);
int modu(int operand1, int operand2);
int eve(int operand1);
int odd(int operand1);
int perc(int operand1, int operand2);
int pmsq(int operand1, int operand2);

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */


#endif // CALCULATOR_OPERATIONS_H_INCLUDED
