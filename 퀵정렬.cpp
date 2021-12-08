#include <stdio.h>
#define swap(x,y,t) ((t)=(x), (x)=(y), (y)=(t))

int count,i;

int Line(int lst[],int left,int right){
	int pivot,low,high,temp;
	low = left;
	high = right + 1;
	pivot = lst[left];
	
	do{
		low++;
	}while(lst[low] < pivot);
	do{
		high--;
	}while(lst[high] > pivot);
	if(low<high){
		swap(lst[low], lst[high], temp);
	}
	while(low<high){
		swap(lst[high], lst[left], temp);
	}
	return high;
}

void quicksort(int lst[],int left,int right){
	if(left < right){
		int q = Line(lst, left, right);
		Line(lst, left, q-1);
		Line(lst,q+1,right);
		count++;
	}
	count++;
}

int main(){
	int n;
	scanf("%d",&n);
	int lst[n];
	for(i=0; i<n; i++){
		scanf("%d",lst[i]);
	}
 	quicksort(lst,0,n-1);
 	printf("%d",count);
 	for(i=0; i<n; i++){
 		printf("%d",lst[i]);
	 }
}
