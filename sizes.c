/*
 * sizes.c
 *
 *  Created on: Jan 24, 2019
 *      Author: Kei Yoshida
 */


#include <stdio.h>



int main() {
	printf("The size of int is %lu \n",sizeof(int));
	printf("The size of char is %lu \n",sizeof(char));
	printf("The size of long is %lu \n",sizeof(long));
	printf("The size of float is %lu \n",sizeof(float));
	printf("The size of double is %lu \n",sizeof(double));
	printf("The size of unsigned int is %lu \n",sizeof(unsigned int));
	printf("The size of unsigned char is %lu \n",sizeof(unsigned char));
	printf("The size of unsigned long is %lu \n",sizeof(unsigned long));
	printf("The size of int * is %lu \n",sizeof(int *));
	printf("The size of char * is %lu \n",sizeof(char *));
	printf("The size of long * is %lu \n",sizeof(long *));
}
