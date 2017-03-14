#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void){

	srand(time(NULL));

	double *c = (double *) malloc ( 5*sizeof(double));
	c[1] = 0.04;
	c[2] = 0.04;

	c[0] = (double) rand() / RAND_MAX + 2.8;
	c[3] = (double) rand() / RAND_MAX + 2.8;

	int i;
	for(i = 0; i < 4; i++){
		printf("#%d: %.5f\n", i, c[i]);
	}
	free(c);
}

/*
Output: 
#0: [random]
#1: 0.04000
#2: 0.04000
#3: [random]
*/
