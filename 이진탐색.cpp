#include <stdio.h>

int i;

void search(int arr[],int start,int end,int k){
	if(start < end){
		 
		int mid = (start+end)/2;
		if(arr[mid] == k) {
			printf("%d번째에 있습니다.",mid+1);
			return;
		}
		else if(arr[mid] > k)	search(arr,start,mid,k);
		else if(arr[mid] < k)   search(arr,mid+1,end,k);
	}
	
}

int main(){
	int n,k;
	int arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	search(arr,0,n-1,k);

}
