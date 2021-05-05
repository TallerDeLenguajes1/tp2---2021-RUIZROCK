#include<stdio.h>
#define n 4
#define m 5

int main(){
	int f,c;
	double array[n][m];
	
	for(f=0;f<m;f++){
		for(f=0;f<n;f++){
			printf("%lf	", array[f][c]);
		}
		printf("\n");
	}
	
	return 0;
}
