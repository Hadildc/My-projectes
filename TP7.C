
#include <stdio.h> 
// Function to compute Euler's Totient Function (ϕ(N)) 
int euler_totient(int N) { 
 int result = N; // Start with ϕ(N) = N 
 // Check for each number from 2 to sqrt(N) 
 for (int p = 2; p * p <= N; p++) { 
 // If p is a divisor of N 
 if (N % p == 0) { 
 // Divide N by p as much as possible 
 while (N % p == 0) { 
 N /= p; 
 } 
 // Update result for this prime factor 
 result -= result / p; 
 } 
 } 
 // If N is still greater than 1, it means N is prime 
 if (N > 1) { 
 result -= result / N; 
 } 
 return result; 
} 
int main() { 
 int N; 
  
 // Input value 
 printf("Enter an integer N: "); 
 scanf("%d", &N); 
  
 // Compute and display the result 
 int result = euler_totient(N); 
 printf("ϕ(%d) = %d\n", N, result); 
  
 return 0; 
}