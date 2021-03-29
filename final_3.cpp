#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,i,j,k=0,c;
	scanf("%d %d %d",&a,&b,&c);
	int x[a][a],y[b][b],z[c][c],sum[10]={0},sum1[10]={0},t[3]={0};
	printf("\n");
	for(i=0 ; i<a;i++){
		for(j=0 ; j<a; j++){
			scanf("%d", &x[i][j]);
		}
	}printf("\n");
	for(i=0 ; i<b;i++){
		for(j=0 ; j<b; j++){
			scanf("%d", &y[i][j]);
		}
	}printf("\n");
	for(i=0 ; i<c;i++){
		for(j=0 ; j<c; j++){
			scanf("%d", &z[i][j]);
		}
	}printf("\n");
	
	for(i=0; i<a; i++){
		k=0;
		for(j=0; j<a; j++){
			sum[i]=sum[i]+x[i][j];
			sum1[i]=sum1[i]+x[k][k];
			k++;
			
		}
		if(i==a-1&&sum[i]==sum1[a-1]){
			t[0]=1;
		}
	}
	for(i=0; i<b; i++){
		k=0;
		for(j=0; j<b; j++){
			sum[i]=sum[i]+x[i][j];
			sum1[i]=sum1[i]+x[k][k];
			k++;
			
		}
		if(i==b-1&&sum[i]==sum1[b-1]){
			t[1]=1;
		}
	}
	for(i=0; i<c; i++){
		k=0;
		for(j=0; j<c; j++){
			sum[i]=sum[i]+x[i][j];
			sum1[i]=sum1[i]+x[k][k];
			k++;
			
		}
		if(i==c-1&&sum[i]==sum1[c-1]){
			t[2]=1;
		}
	}
	for(i=0; i<3; i++){
		if(t[i]==0){
			printf("yes\n");
		}else if(t[i]==1){
			printf("no\n");
		}
	}
	
	return 0;
}
