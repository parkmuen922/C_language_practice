#include <stdio.h>

int i;

int search(int arr[],int k, int n){
	for(i=0;i<n;i++){
		if(k == arr[i]){
			printf("%d번째에 있습니다.",i+1);
			return 0;
		}
	}
	return 1;
}

int main(){
	int n,k,result;
	int arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	scanf("%d",&k);
	
	result = search(arr,k,n);
	if(result == 1){
		printf("찾으려는 수는 없습니다.");
	} 
}
