#include <stdio.h>

void addMatrices(int A[][100], int B[][100], int C[][100], int n);
void multiplyMatrices(int A[][100], int B[][100], int C[][100], int n);
void transposeMatrix(int A[][100], int B[][100], int n);

int main() {
    int choice, n;
   
    printf("Enter the size of the square matrices: ");
    scanf("%d", &n);
   
    int A[100][100], B[100][100], C[100][100];
   
    printf("Enter the elements of Matrix A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
   
    printf("Enter the elements of Matrix B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }
   
    while (1) {
        printf("\nMatrix Operations Menu:\n");
        printf("1. Add Matrices\n");
        printf("2. Multiply Matrices\n");
        printf("3. Transpose Matrix\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
       
        switch (choice) {
            case 1:
                addMatrices(A, B, C, n);
                printf("Result of Addition:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
                break;
               
            case 2:
                multiplyMatrices(A, B, C, n);
                printf("Result of Multiplication:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
                break;
               
            case 3:
                transposeMatrix(A, C, n);
                printf("Result of Transpose:\n");
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < n; j++) {
                        printf("%d ", C[i][j]);
                    }
                    printf("\n");
                }
                break;
               
            case 4:
                printf("Exiting program.\n");
                return 0;
               
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
   
    return 0;
}

void addMatrices(int A[][100], int B[][100], int C[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void multiplyMatrices(int A[][100], int B[][100], int C[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void transposeMatrix(int A[][100], int B[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           B[i][j]=A[j][i];
        }
    }
    }
    
