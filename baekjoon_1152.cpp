#include <stdio.h>
int cnt,len;
int main(){
	char arr[1000001];
	gets(arr);
	for(int i=0; arr[i]!='\0'; i++){
		len++;
	}
	for(int i=0; arr[i]!='\0'; i++){
		if(arr[i]==' ') cnt++;
	}
	if(arr[0] == ' ' && arr[len-1] != ' ') 
		printf("%d",cnt);
    else if(arr[0] != ' ' && arr[len-1] == ' ') 
		printf("%d",cnt);
    else if(arr[0] == ' ' && arr[len-1] == ' ') 
		printf("%d",cnt-1);
	else printf("%d",cnt+1);
	return 0;		
}
