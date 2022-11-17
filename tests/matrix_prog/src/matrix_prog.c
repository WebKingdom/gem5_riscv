/**
 * @file main.c
 * @author Soma Szabo
 * @brief A simple matrix determinant, sum, and identity matrix program
 * @version 0.1
 * @date 2022-09-06
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <math.h>
#define MATRIX_SIZE 3

int compute3x3Det(int matrix[MATRIX_SIZE][MATRIX_SIZE]);
int sum(int matrix[MATRIX_SIZE][MATRIX_SIZE]);
void identityM(int matrix[MATRIX_SIZE][MATRIX_SIZE]);

int main()
{
	int matrixOne[MATRIX_SIZE][MATRIX_SIZE] = {
			1, 6, 9,
			7, 2, 6,
			3, 5, 4};

	int i;
	int j;

	// printf("Enter values of 3 by 3 matrix: \n");
	// for (i = 0; i < MATRIX_SIZE; i++) {
	// 	for (j = 0; j < MATRIX_SIZE; j++) {
	// 		printf("Matrix at [%d][%d] = ", i, j);
	// 		scanf(" %d", &matrixOne[i][j]);				//scans user inputs to matrixOne
	// 	}
	// }

	printf("\nThe matrix is: \n");

	for (i = 0; i < MATRIX_SIZE; i++)
	{
		for (j = 0; j < MATRIX_SIZE; j++)
		{
			printf("%4d", matrixOne[i][j]); // prints contents of matrixOne
		}
		printf("\n");
	}

	printf("\nThe determinant is %d.\n", compute3x3Det(matrixOne));
	printf("The sum of all elements in matrix is: %d.\n", sum(matrixOne));
	identityM(matrixOne);

	return 0;
}

// Function below computes the determinant of a 3x3 matrix
int compute3x3Det(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
	int determinant;
	determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
	return determinant;
}

// Determines if the given matrix is an identity matrix
void identityM(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
	if (matrix[0][0] == 1 && matrix[1][1] == 1 && matrix[2][2] == 1)
	{
		if (matrix[0][1] == 0 && matrix[0][2] == 0 && matrix[1][0] == 0 && matrix[1][2] == 0 && matrix[2][0] == 0 && matrix[2][1] == 0)
		{
			printf("The matrix is an identity matrix.\n");
		}
		else
		{
			printf("The matrix is not an identity matrix.\n");
		}
	}
	else
	{
		printf("The matrix is not an identity matrix.\n");
	}
}

// Computes sum of all elements in matrix
int sum(int matrix[MATRIX_SIZE][MATRIX_SIZE])
{
	int i;
	int j;
	int sum = 0;

	for (i = 0; i < MATRIX_SIZE; i++)
	{
		for (j = 0; j < MATRIX_SIZE; j++)
		{
			sum += matrix[i][j];
		}
	}
	return sum;
}
