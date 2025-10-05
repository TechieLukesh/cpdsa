#include <stdio.h>

// Define a structure to represent a sparse matrix entry
struct SparseMatrix {
    int row;
    int col;
    int value;
};

// Function to convert a regular matrix to sparse matrix
int convertToSparse(int rows, int cols, int matrix[rows][cols], struct SparseMatrix sparse[]) {
    int k = 0; // Counter for non-zero elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] != 0) {
                sparse[k].row = i;
                sparse[k].col = j;
                sparse[k].value = matrix[i][j];
                k++;
            }
        }
    }
    return k; // Return the number of non-zero elements
}

// Function to display the sparse matrix
void displaySparseMatrix(struct SparseMatrix sparse[], int nonZeroCount) {
    printf("Row\tCol\tValue\n");
    for (int i = 0; i < nonZeroCount; i++) {
        printf("%d\t%d\t%d\n", sparse[i].row, sparse[i].col, sparse[i].value);
    }
}

int main() {
    int rows, cols;
    
    // Input for matrix dimensions
    printf("Enter the number of rows and columns in the matrix:\n");
    scanf("%d %d", &rows, &cols);
    
    // Declare and input the matrix
    int matrix[rows][cols];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    // Calculate the maximum possible number of non-zero elements
    int maxNonZero = rows * cols;
    
    // Array to hold the sparse matrix representation
    struct SparseMatrix sparse[maxNonZero];
    
    // Convert the regular matrix to sparse matrix
    int nonZeroCount = convertToSparse(rows, cols, matrix, sparse);
    
    // Display the sparse matrix
    printf("Sparse Matrix Representation:\n");
    displaySparseMatrix(sparse, nonZeroCount);
    
    return 0;
}
