#include <stdio.h>
#define swap(x,y,t) ((t)=(x), (x)=(y), (y)=(t)) 

int i;

void quicksort(int arr[],int left,int right);
int quick(int arr[],int left,int right);
void printAll(int arr[],int n);


int main(){
	int n;
	int arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	quicksort(arr,0,n-1);
	printAll(arr,n); 
	
}

int quick(int arr[],int left,int right){
	int pivot,low,high,temp;
	pivot = arr[left];
	low = left;
	high = right + 1;
	do{
		do{
			low++;
		}while(arr[low] <pivot);
		do{
			high--;
		}while(arr[high] > pivot);
		if(low < high){
			swap(arr[low],arr[high],temp);
		}
	}while(low < high);
	swap(arr[high],arr[left],temp);

	return high;

}

void quicksort(int arr[],int left,int right){
	if(left < right){
		int q = quick(arr,left,right);
		quicksort(arr,left,q-1);
		quicksort(arr,q+1,right);
	}
	
}

void printAll(int arr[],int n){
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
