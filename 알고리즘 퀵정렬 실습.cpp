#include <stdio.h>
#define swap(x,y,t) ((t)=(x), (x)=(y), (y) = (t))

int count;

void printAll(int k[],int count,int n){
	printf("%d´Ü°è : ",count);
	for(int i=0; i<n; i++){
		printf("%d ",k[i]);
	}
	printf("\n");
}

int Line_up(int k[], int left, int right,int n){
	int low;
	int high;
	int pivot;
	int temp=0;
	low = left;
	high = right+1;
	pivot = k[left];
	while (1){
		while(1){
			low++;
			if(pivot > k[low]) break;
		}
		while(1){
			high--;
			if(pivot <= k[high]) break;
		}
		if(low < high){
			swap(k[low],k[high],temp);
		}
		if(low > high){
			swap(k[left],k[high],temp);
			count ++;
			printAll(k,count,n);
			return high;
		}
	}	
}

void quiksort(int k[], int left , int right,int n){
	
	if(left < right){
		int q = Line_up(k,left, right,n);
		quiksort(k,left,q-1,n);
		quiksort(k,q+1,right,n);
	}
	
}



int main(){
	int n;
	int k[70]={0,};
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&k[i]);
	}
	quiksort(k,0,n-1,n);
}

