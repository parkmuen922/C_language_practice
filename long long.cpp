#include <stdio.h> 
int main()
{
	long long i;
	long long val = 1;
	long long n = 31;
	for (i=1;i<=n;i++){
		val = val *2;
	}	 
	printf("%lld",val);
	return 0;
}
