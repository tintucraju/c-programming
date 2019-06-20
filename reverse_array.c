#include <stdio.h>

int main(int argc, char *argv[]) {
	int n = 5,temp,i,j,a[] = {10,20,30,40,50};
	for(i=0,j=n-1;i<=j;++i,--j){
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;		
	}
  
	for(i=0;i<n;++i){
		printf("%d ",a[i]);
	}
	return 0;
}

