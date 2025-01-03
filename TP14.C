
#include <stdio.h> 
// Function to compute the sum of squares of the first N natural  
numbers 
int sum_of_squares(int N) { 
 int sum = 0; 
  
 // Loop to calculate the sum of squares 
 for (int i = 1; i <= N; i++) { 
 sum += i * i; 
 } 
  
 return sum;
} 
int main() { 
 int N; 
  
 // Input the number of terms 
 printf("Enter the value of N: "); 
 scanf("%d", &N); 
  
 // Call the function and print the result 
 int result = sum_of_squares(N); 
 printf("The sum of squares of the first %d natural numbers is:  
%d\n", N, result); 
  
 return 0; 
}