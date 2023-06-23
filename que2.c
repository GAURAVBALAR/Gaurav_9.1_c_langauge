#include<stdio.h>
void main(){
	char str[100];
	int i;
	printf("Enter your String :");
	scanf("%s",&str);
	for(i=0;i<=100;i++){
		if(str[i]>=65 && str[i]<=90){
			str[i]=str[i]+32;
		}
	}
	printf("%s",str);
}
