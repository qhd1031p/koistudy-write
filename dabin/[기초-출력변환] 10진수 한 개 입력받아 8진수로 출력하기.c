#include <stdio.h>
int main()
{
	int a=0;
	char b[5];
	scanf("%d",&a);
	for(int i=0;i<5;i++){
	if(a/8==0){b[i]=a; break;}
	else{b[i]=a%8;}
	a=a/8;
	}
	for(int i=4;i>-1;i--){
	if(b[i]!=0)printf("%d",b[i]);
	}
	return 0;
	}
