#include <stdio.h>

int main(){
    int t,i,j;
    float a=1.0,n,r,n1,b=1,z;
    scanf("%d",&t);
    scanf("%f",&n);
    scanf("%f",&r);
    if((n-r)>r){
    	j=n-r;
    	n1=n;
        for(i=n;i>j;i--){
            a*=n1;
            printf("%f %f\n",n1,r);
            n1--;
        }
        for(i=n;i>j;i--){
            b*=r;
            printf("%f %f\n",n1,r);
            r--;
        }
    }
    else{
        for(i=n;i>r;i--){
            a*=(n/(n-r));
            n--;
        }
	}
	z=a/b;
	printf("%.0f",z);
}

