
#include <stdio.h> 
#include <math.h> // For pow function 
double geometric_series_sum(double a, double r, int N) { 
 // Function to compute the sum of the first N terms of a geometric  
series 
 // a: the first term of the series 
 // r: the common ratio between the terms 
 // N: the number of terms to sum 
 // 
 // Returns the sum of the first N terms 
  
 // If the common ratio is 1, the sum is just N times the first term 
 if (r == 1) { 
 return N * a; 
 } 
  
 // Use the formula for the sum of the first N terms of a geometric  
series 
 double S = a * (1 - pow(r, N)) / (1 - r); 
  
 return S; 
} 
int main() { 
 double a = 2.0; // First term 
 double r = 3.0; // Common ratio 
 int N = 5; // Number of terms 
 // Call the function and print the result 
 double sum = geometric_series_sum(a, r, N); 
 printf("The sum of the first %d terms is: %f\n", N, sum); 
 return 0; 
}