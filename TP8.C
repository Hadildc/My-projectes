
#include <stdio.h> 
// Function to perform modular exponentiation 
int mod_exp(int A, int B, int P) { 
 int result = 1; 
 A = A % P; // Ensure A is within the modulus 
 while (B > 0) { 
 if (B % 2 == 1) { 
 result = (result * A) % P; 
 } 
 B = B / 2; 
 A = (A * A) % P; 
 } 
  
 return result; 
} 
// Function to compute (A^B) % P using Fermat's Little Theorem 
int fermat_mod_exp(int A, int B, int P) { 
 // Reduce the exponent using Fermat's Little Theorem 
 B = B % (P - 1); // B can be reduced modulo (P-1) 
  
 // Compute A^B % P 
 return mod_exp(A, B, P); 
} 
int main() { 
 int A, B, P; 
  
 // Input values 
 printf("Enter base (A), exponent (B), and prime modulus (P): "); 
 scanf("%d %d %d", &A, &B, &P); 
  
 // Compute (A^B) % P using Fermat's Little Theorem 
 int result = fermat_mod_exp(A, B, P); 
 printf("Result: %d\n", result); 
  
 return 0; 
}