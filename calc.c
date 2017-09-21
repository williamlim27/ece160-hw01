#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char*argv[]){

float x = atof(argv[2]);
float y = atof(argv[3]);
float answer = 0;

		
			char operation = argv[1][0];
			switch(operation) {
				case('+'):;
				answer = x + y; 
				break;
				case('-'):;
				answer = x - y; 
				break;
				case('x'):;
				answer = x * y; 
				break;
				case('/'):;
				answer = x / y; 
				break;
				default:;
				printf("try again\n");
			}
			printf("%g\n", answer);
		
		return 0;
}

/*
{

for (int i =1; i < argc; ++i) {
	if (strcmp(argv[i], "1") == 0) {
		printf("one\n");
	 } else if (strcmp (argv[i], "2") == 0){
		printf("two\n");
	} else if (strcmp (argv[i], "3") == 0) {
		printf("three\n");
	} else {
		printf("three\n");
	}
	return 0;
}
*/