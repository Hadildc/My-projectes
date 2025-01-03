
#include <stdio.h> 
// Function to compute the sum of divisors of N 
int sum_of_divisors(int N) { 
 int sum = 1; // Initialize sum with 1 (since 1 divides every  
number) 
 // Check for each number from 2 to sqrt(N) 
 for (int p = 2; p * p <= N; p++) { 
 if (N % p == 0) { // If p is a divisor of N 
 int current_sum = 1;
int term = 1; 
 // Calculate the sum of divisors for the prime p 
 while (N % p == 0) { 
 N /= p; 
 term *= p; // term becomes p^1, p^2, ..., p^e 
 current_sum += term; // Add p^e to the current sum for  
this prime factor 
 } 
 sum *= current_sum; // Multiply the sum for this prime 
 } 
 } 
 // If N is greater than 1, it means N is prime, and its sum of  
divisors is 1 + N 
 if (N > 1) { 
 sum *= (1 + N); 
 } 
 return sum; 
} 
int main() { 
 int N; 
  
 // Input the number 
 printf("Enter a number N: "); 
 scanf("%d", &N); 
  
 // Compute and display the sum of divisors 
 int result = sum_of_divisors(N); 
 printf("Sum of divisors of %d = %d\n", N, result); 
  
 return 0; 
}