#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main(){
    char p[100];
    char z[100];
    int T,i,res1=0,res2=0;
    int  resp[100];
    int resz[100];
    scanf("%s",&p);
    T=strlen(p);
    scanf("%s",&z);
    if(strlen(z)!=strlen(p)){
    	printf("NO\n");
	}
    else{
    	for(i=0;i<T;i++){
    		resp[i]=p[i];
    		resz[i]=z[i];
    		res1+=resp[i];
    		res2+=resz[i];
		}
    	if((res1-res2)==0)
    		printf("YES\n");
    	else
    		printf("NO\n");
	}
	system("PAUSE");
	return 0;
}
