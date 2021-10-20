#include <stdio.h>
#include <stdlib.h>
int main(){
	int *val,T,T2,k,p,j,i,x,temp=0;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d %d %d",&T2,&k,&p);
		val=(int*)malloc(T2*sizeof(int));
		for(j=0;j<T2;j++){
			val[i]=rand()%10;	
			printf("%d ",val[i]);
		}
		x=rand()%10;
		printf("\n %d ",x);	
		for(j=0;j<T;j++){
			if(val[i]>=(x-p) && val[i]<=(x+p))
			temp++;
		}
		printf("temp = %d ",temp);
		if(temp>=k){
			printf("NO");
		}
		else{
			printf("YES");
		}
	}
	return 0;
}
