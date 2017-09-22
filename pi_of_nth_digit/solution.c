/* proram to find the n.th digit of pi */

/* created by

   Nityannada Gohain
   on 22/09/2017



   can display pi upto 1000 digits after decimal
   for more than 1000 no of digits change the value of max 
 */

//keeping the upper limit of n as 1000

#include <stdio.h>
#define MAX 1000

int main()
{
	int dividend,divisor=7,quotient,remainder;
	int n,i;
	printf("Enter N(n<%d) for printinh the nth decimal of pi : ",MAX);
	scanf("%d",&n);	
	dividend=10; //since the first remainder is 1
	printf("\n\n");
	if(n>=0 && n<MAX) //Taking 1000 as the upper limit of n
	{
		printf("%d.",22/7);
		for(i=1;i<=n;i++)
		{
			quotient=dividend/divisor;
			remainder=dividend%divisor;
			printf("%d",quotient); //printing digits one by one
			if(remainder>7)
				dividend=remainder;
			else
				dividend=remainder*10;
		}
		printf("\n\n");
	}
	else
		printf("Enter a valid value of n\n");
	return 0;
}

