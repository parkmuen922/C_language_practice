#include <stdio.h>

int main(){
	char arr[256];
	
	while(1){
		int i,cnt=0;
		gets(arr);
		if (arr[0] == '#') break;	
		for(i=0; arr[i]!='\0'; i++){
			if(arr[i] == 'a' || arr[i] == 'A') cnt++;	
			else if (arr[i] == 'i' || arr[i] == 'I') cnt++;
			else if (arr[i] == 'e' || arr[i] == 'E') cnt++;
			else if (arr[i] == 'O' || arr[i] == 'o') cnt++;
			else if (arr[i] == 'u' || arr[i] == 'U') cnt++;
		}
		printf("%d\n",cnt);
	}
	return 0;
}
