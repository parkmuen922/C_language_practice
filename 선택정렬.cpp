#include <stdio.h>

int i,j;
int k,temp;


int main(){
	int arr[100];
	int n;
	scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	
	

	for(i=0;i<n-1; i++){
		k=i;
		for(j=i+1; j<n; j++)
		{
			if(arr[k]>arr[j])
			{
				k=j;
			}
		}
		temp = arr[k];
		arr[k] = arr[i];
		arr[i] = temp;
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
