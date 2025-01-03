#include <stdio.h> 
// Function to generate and print the first N Fibonacci numbers 
void generate_fibonacci(int N) { 
 // Special case when N is 1 
 if (N <= 0) {
printf("Invalid input. N must be a positive integer.\n"); 
 return; 
 } 
  
 // Initialize the first two numbers of the Fibonacci series 
 int first = 0, second = 1; 
  
 // Handle the case when N is 1 
 if (N == 1) { 
 printf("%d\n", first); 
 return; 
 } 
  
 // Print the first two terms 
 printf("%d ", first); // Print 0 
 printf("%d ", second); // Print 1 
 // Generate and print the remaining N-2 terms 
 for (int i = 3; i <= N; i++) { 
 int next = first + second; // Calculate next term 
 printf("%d ", next); // Print the next term 
 first = second; // Update the first number 
 second = next; // Update the second number 
 } 
  
 printf("\n"); 
} 
int main() { 
 int N; 
  
 printf("Enter the number of Fibonacci terms to generate: "); 
 scanf("%d", &N); 
  
 // Call the function to generate and print Fibonacci series 
 generate_fibonacci(N); 
  
 return 0; 
}