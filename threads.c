#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>


void *prime(void * ) {
	int n;
	int result;
	for(k = 0; k < n; k++) {
		if(k%2 == 0 && k%n == 00) 
	}

}


int main() {

	int N;

	pthread_t thread[N];
	for(int i = 2; i <= N; i++){ 
		int f = pthread_create(&thread[i], NULL, prime, (void*)i);

	} 
	return 0;
}

