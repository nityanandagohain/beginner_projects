/* proram to find the n.th digit of pi */

/* created by

   Nityannada Gohain
   on 22/09/2017 
 */

//keeping the upper limit of n as 1000

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int dividend,divisor=7,quotient,remainder;
	int n,i;
	printf("Enter N for printinh the nth decimal of pi : ");
	scanf("%d",&n);	
	dividend=10; //since the first remainder is 1
	if(n>=1 && n<1000) //Taking 1000 as the upper limit of n
	{
		for(i=1;i<=n;i++)
		{
			quotient=dividend/divisor;
			remainder=dividend%divisor;
			if(remainder>7)
				dividend=remainder;
			else
				dividend=remainder*10;
		}
		printf("The nth(n=%d) value of pi is %d",n,quotient);
	}
	else
		printf("Enter a valid value of n\n");
	return 0;
}

