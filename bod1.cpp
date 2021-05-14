#include<stdio.h>

int main(){
	int a,b,sec;
	scanf("%d",&sec);
	//200  3 min 20 sec
	a=sec/60;
	b=sec%60;
	printf("%d %d",a,b);
	return 0;
}
