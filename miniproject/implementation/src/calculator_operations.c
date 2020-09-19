#include <calculator_operations.h>
int isprime(int operand1);

int add(int operand1, int operand2)
{
    return operand1 + operand2;
}

int subtract(int operand1, int operand2)
{
    return operand1 - operand2;
}

int multiply(int operand1, int operand2)
{
    return operand1 * operand2;
}

int divide(int operand1, int operand2)
{
    if(0 == operand2)
        return 0;
    else
        return operand1 / operand2;
}


int prime(int operand1)
{
  int result = isprime(operand1);
  return result;
}

int isprime(int operand1)
{
	int i;
   for(i=2;i<operand1;i++)
  /* checks prime number */
  if(operand1%i== 0)
    break;
  /* Return 1 for prime number */
  if(i>operand1/2)
  return -1;
  else
  return 1;
}
int pos(int operand1)
{
	if(operand1>0)
		return 1;	
}
int neg(int operand1)
{
	if(operand1<0)
		return -1;	
}
int iszero(int operand1)
{
	if(operand1==0)
		return 0;	
}
int modu(int operand1, int operand2)
{
    return operand1 % operand2;
}
int eve(int operand1)
{
	if(operand1%2==0)
	{
		return 1;
	}
}
int odd(int operand1)
{
	if(operand1%2==1)
	{
		return 1;
	}
}
int perc(int operand1, int operand2)
{
    return (operand1*100 /operand2);
}
int pmsq(int operand1, int operand2)

{

    return operand1*2 + operand2*2;

}
int pmrq(int operand1)
{
	return operand1*4;
}
int pmcr(int operand1)
{
	return operand1*6;
}
int pmtr(int operand1, int operand2)

{

    return operand1 + operand2;

}
int arrq(int operand1, int operand2)

{

    return operand1* operand2;

}
int arsq(int operand1)

{
	return operand1* operand1;
}
int arci(int operand1)

{
	return operand1* operand1*3;
}
int factorial(int operand1)

{

  /* Return -1 for negative numbers */

  if(operand1 < 0)

    return -1;



  /* Return 1 for 0 */

  if(operand1 == 0)

    return 1;



  /* Recursively calculate Factorial of the number */

  return operand1 * factorial(operand1-1);

}
int ams(int operand1)
{
	int i,rem=0,res=0;
	i=operand1;
	while(i!=0)
	{
		rem=i%10;
		res+=rem*rem*rem;
		i/=10;
	}
	if(res==operand1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}	
