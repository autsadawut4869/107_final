#include <stdio.h>
int main()
{
	int a,b,i,j,k,s[10]={0},n;
	scanf("%d %d",&a,&b);
	for(i=0; a>0; i++){
		s[i]=a%10;
		n=s[i];
		a=a/10;
		k++;
	}
	
	
	return 0;
}
