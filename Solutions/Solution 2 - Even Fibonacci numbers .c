#include<stdio.h>
#include<time.h>


int main(){
	clock_t start = clock();
	int f1, f2 = 1;
	int cTerm = f1+f2;
	long sum =0; 
	while(cTerm<=4000000){
		if(cTerm%2==0){
			sum = sum + (long)cTerm;
		}
		int temp = f2;
		f2=cTerm;
		f1=temp;
		cTerm = f1+f2;
	}
	clock_t end = clock();
	double time_taken = ((double)(end-start)/CLOCKS_PER_SEC);
	printf("Result: %d\n", sum);
	printf("Time:	%f seconds\n", time_taken);
}