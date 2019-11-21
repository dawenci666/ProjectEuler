#include <iostream>
#include <ctime>
using namespace std;

int main(){
	clock_t start = clock();
	int sum = 0;
	for(int i=1;i<1000;i++){
		if(i%3==0||i%5==0){
            sum = sum+i;
        }
	}
	cout << fixed << "Time: " << (double)(clock() - start) / CLOCKS_PER_SEC << " seconds" << endl;
	cout << fixed << "Result: " << sum << endl;
	return 0;
}