#include<stdio.h>

int isPrime(int); //function check prime

int main()
{
	int n,n1,n2;
	
	while(scanf("%d",&n)!= EOF)
	{
		if(isPrime(n))
		{
			n1=n;
			n2=0;
				
			while(n1){					//reverse num
				n2 = n2*10 +n1%10;
				n1/=10;
			}
			if(n2!=n && isPrime(n2))
			{
				printf("%d is empire.\n",n);
			}	
			else
				printf("%d is prime.\n",n);
				
		}
		else
			printf("%d is not prime.\n",n);
			
	}
	return 0;
}

int isPrime(int n)   
{
	int i;
	
	for(i=2; i<n;i++)
	{
		if(n%i==0) break;
	}
	
	return i==n;
}
