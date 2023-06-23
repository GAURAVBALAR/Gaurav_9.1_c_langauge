#include<stdio.h>
void main(){
	int i;
	char str[100];
	printf("Enter your String :");
	scanf("%s",str);
	for(i=0;i<=100;i++){
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}else if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
	}
	printf("%s",str);
}
