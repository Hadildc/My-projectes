
#include <stdio.h> 
int mod_exp(int A, int B, int M) { 
 int result = 1; // Initialize result 
 A = A % M; // Ensure A is within the modulus 
 while (B > 0) { 
 // If B is odd, multiply A with the result 
 if (B % 2 == 1) { 
 result = (result * A) % M; 
 } 
  
 // B must be even now, so we divide it by 2 
 B = B / 2; 
 // Square A and take modulo M 
 A = (A * A) % M; 
 } 
  
 return result; 
} 
int main() { 
 int A, B, M;
// Input values 
 printf("Enter base (A), exponent (B), and modulus (M): "); 
 scanf("%d %d %d", &A, &B, &M); 
  
 // Compute (A^B) % M and display the result 
 int result = mod_exp(A, B, M); 
 printf("Result: %d\n", result); 
  
 return 0; 
}