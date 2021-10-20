#include <stdio.h>
#include <stdlib.h>


int decimal_to_binary(int a);

int main(){
	int X,D,T,i,j,ans=0,Z;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d",&X);
		for(D=1;D<=X;D++){
			Z=X/D;
			if(decimal_to_binary(D)>=decimal_to_binary(Z))
				{
					ans++;
				}
		}
		printf("%d\n",ans);
		ans=0;
	}
	
}

int decimal_to_binary(int a){
	int i,x=1;
	while(a>=2){
		a=a/2;
		x++;
	}
	return x;
}
