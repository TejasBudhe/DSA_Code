Q2.Write a C program to generate Pascal Triangle using array


#include <stdio.h>  
// Function to calculate and display Pascal's Triangle  
void displayPascalsTriangle(int n) {  
    int triangle[100][100];  
  
    // Initialize first row to 1's  
    for (int i = 0; i< n; i++) {  
        triangle[0][i] = 1;  
    }  
  
    
    for (int i = 1; i< n; i++) {  
        for (int j = 0; j <= i; j++) {  
            if (j == 0 || j == i) {  
                triangle[i][j] = 1;  
            } else {  
                triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];  
            }  
        }  
    }  
  
    // Display triangle 
printf("Pascal's Triangle (up to row %d):\n", n);  
    for (int i = 0; i< n; i++) {  
        for (int j = 0; j < n-i-1; j++) {  
printf("  "); // Add spaces 
        }  
        for (int j = 0; j <= i; j++) {  
printf("%4d", triangle[i][j]); // Print number   
        }  
printf("\n");  
    }  
}  
  
int main() {  
    int n = 10; // Number of rows to generate  
displayPascalsTriangle(n); // function to display Pascal's Triangle  
  
    return 0;  
}  
