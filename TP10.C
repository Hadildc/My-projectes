
#include <stdio.h> 
// Function to perform the Extended Euclidean Algorithm 
// It returns gcd(A, B) and also finds x and y such that A*x + B*y =  
gcd(A, B) 
int extended_gcd(int A, int B, int *x, int *y) { 
 if (B == 0) { 
 *x = 1; 
 *y = 0; 
 return A; 
 } 
  
 int x1, y1; // Temporary variables to store results of recursion 
 int gcd = extended_gcd(B, A % B, &x1, &y1); 
 // Update x and y using results from the recursive call 
 *x = y1;
*y = x1 - (A / B) * y1; 
  
 return gcd; 
} 
// Function to find if the equation Ax + By = C has integer solutions 
int find_solution(int A, int B, int C, int *x, int *y) { 
 // Find gcd(A, B) and the coefficients x, y 
 int g = extended_gcd(A, B, x, y); 
 // Check if gcd(A, B) divides C 
 if (C % g != 0) { 
 return 0; // No solution exists 
 } 
 // Scale the solution by C / g 
 *x = *x * (C / g); 
 *y = *y * (C / g); 
  
 return 1; // Solution exists 
} 
int main() { 
 int A, B, C; 
 int x, y; 
 // Input values for A, B, and C 
 printf("Enter values for A, B, and C: "); 
 scanf("%d %d %d", &A, &B, &C); 
 // Find if the equation Ax + By = C has a solution 
 if (find_solution(A, B, C, &x, &y)) { 
 printf("The equation has a solution: x = %d, y = %d\n", x, y); 
 } else { 
 printf("No solution exists for the equation.\n"); 
 } 
 return 0; 
}