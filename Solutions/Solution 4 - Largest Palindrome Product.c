#include <stdio.h>
#include <time.h>

int main(){
	clock_t start = clock();
	int LargestPalindromeProduct = 0;
    for(int i =1;i<1000;i++){
      for(int j= 1;j<1000;j++){
        int product = i*j;
        int num = product, reversed = 0;
        while(num != 0) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
            num = num/10;
        }
        if(reversed==product && product>LargestPalindromeProduct){
          LargestPalindromeProduct = product;
        }
      }
    }
    clock_t end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Result: %d\n", LargestPalindromeProduct);
    printf("Time:   %f\n", time_taken);
}
