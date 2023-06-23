#include<stdio.h>
void main(){
	char str[100];
	int i;
	printf("Enter your String :");
	scanf("%s",&str);
	for(i=0;i<=100;i++){
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
	}
	printf("%s",str);
}
