#include <stdio.h>
int main()
{
	long long int n,i,j,k=0,x,max,ch,posit=0,temp=0;
	scanf("%lld", &n);
	long long int a[1][n],c[10]={0};
	for(i=0; i<1; i++){
		for(j=0; j<n; j++){
			scanf("%lld", &a[i][j]);
		}
	}
	max=0;
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			if(a[0][i]==a[0][j]){
				c[i]=c[i]+1;	
			}
		}
		if(c[i]>max){
			max=c[i];
			ch=i;
		}else{
			continue;
		}
	}
	for(i=0; i<n; i++){
		if(c[i]==max&&a[0][i]!=a[0][ch]){
			posit=i;
			temp=1;
			break;
		}
	}
	if(temp==1){
		if(a[0][ch]>=a[0][posit])
		{
			printf("%lld %lld\n",a[0][posit],a[0][ch]);	
		}
		else
		{
			printf("%lld %lld\n",a[0][ch],a[0][posit]);	
		}
	}else{
		printf("%lld\n",a[0][ch]);
	}
	
	
	return 0;
}
