#include <stdio.h>
int main()
{
	int n,i,j,k=0,x,max,ch;
	scanf("%d", &n);
	int a[1][n],c[10]={0};
	for(i=0; i<1; i++){
		for(j=0; j<n; j++){
			scanf("%d", &a[i][j]);
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
	printf("%d\n",a[0][ch]);
	
	return 0;
}
