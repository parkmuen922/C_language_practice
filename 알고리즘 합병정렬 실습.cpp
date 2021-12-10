#include <stdio.h>
int sorted[100],count;

void printAll(int ki[],int count,int n){
	printf("%d´Ü°è : ",count);
	for(int i=0; i<n; i++){
		printf("%d ",ki[i]);
	}
	printf("\n");
}

void merge(int ki[], int left,int mid, int right,int n)
{
    int i,j,k,l;
    i=left;
    j=mid+1;
    k=left;
    while(i<=mid && j<=right)
    {
        if(ki[i]>=ki[j])
        {
            sorted[k++]=ki[i++];
        }
        else
        {
            sorted[k++]=ki[j++];
        }
    }
    if(i>mid)
    {
        for(l=j; l<=right; l++)
        {
            sorted[k++]=ki[l];
        }
    }
    else
    {
        for(l=i; l<=mid; l++)
        {
            sorted[k++]=ki[l];
        }
    }
    for(l=left; l<=right; l++)
    {
        ki[l]=sorted[l];
    }
	count++;
	printAll(ki,count,n);
}

void mergeSort(int ki[],int left,int right,int n){
	int mid;
	if(left < right){
		mid = (left+right)/2;
		mergeSort(ki,left,mid,n); 
		mergeSort(ki,mid+1,right,n);
		merge(ki,left,mid,right,n);
	}
}

int main(){
	int n;
	int ki[70]={0,};
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&ki[i]);
	}
	mergeSort(ki,0,n-1,n);
}

