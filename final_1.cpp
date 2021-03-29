#include <stdio.h>
int main()
{
	int n,i,j,k=0,x=0;
	scanf("%d", &n);
	int a[1][n],c[10]={0};
	for(i=0; i<1; i++){
		for(j=0; j<n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(a[1][i]==a[1][j])
			{
				if(a[1][i]==a[1][j]&&a[1][i-1]==c[k]){
					k=k-1;
				}
				c[k]=c[k]+1;
				k++;
				x=1;
			}
			if(j=n-1&&x!=1){
				k=k+1;
				x=0;
			}else{
				k=k;
			}
		}
		
	}
	for(i=0; i<k; i++){
		printf("%d=%d\n",i,c[i]);
	}
	
	
	return 0;
}
