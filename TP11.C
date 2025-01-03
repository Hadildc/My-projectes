
#include <stdio.h> 
// Function to perform the Extended Euclidean Algorithm to find the  
modular inverse 
// It returns gcd(a, b) and also finds x and y such that a*x + b*y =  
gcd(a, b) 
int extended_gcd(int a, int b, int *x, int *y) { 
 if (b == 0) { 
 *x = 1; 
 *y = 0; 
 return a; 
 }
int x1, y1; // Temporary variables to store results of recursion 
 int gcd = extended_gcd(b, a % b, &x1, &y1); 
 // Update x and y using results from the recursive call 
 *x = y1; 
 *y = x1 - (a / b) * y1; 
  
 return gcd; 
} 
// Function to find the modular inverse of a mod m 
// It returns x such that (a * x) % m == 1 
int mod_inverse(int a, int m) { 
 int x, y; 
 int g = extended_gcd(a, m, &x, &y); 
 if (g != 1) { 
 // Inverse doesn't exist if gcd(a, m) != 1 
 return -1; 
 } else { 
 // Make sure the result is positive 
 return (x % m + m) % m; 
 } 
} 
// Function to solve a system of simultaneous congruences using the  
Chinese Remainder Theorem 
int chinese_remainder_theorem(int n[], int r[], int k) { 
 // Step 1: Calculate the product of all moduli N = n1 * n2 * ... *  
nk 
 int N = 1; 
 for (int i = 0; i < k; i++) { 
 N *= n[i]; 
 } 
 // Step 2: Initialize the solution X to 0 
 int X = 0; 
 // Step 3: For each congruence, calculate the contribution to the  
solution 
 for (int i = 0; i < k; i++) { 
 // Calculate Ni = N / ni 
 int Ni = N / n[i]; 
  
 // Find the modular inverse of Ni mod ni 
 int Mi = mod_inverse(Ni, n[i]); 
  
 // Add the contribution of this congruence to the solution 
 X += r[i] * Ni * Mi; 
 } 
 // Step 4: Return the result modulo N (the smallest solution) 
 return (X % N + N) % N; 
} 
int main() { 
 int k;
printf("Enter the number of congruences: "); 
 scanf("%d", &k); 
  
 int n[k], r[k]; 
  
 // Input the moduli and remainders 
 printf("Enter the moduli and remainders (n_i, r_i) for each  
congruence:\n"); 
 for (int i = 0; i < k; i++) { 
 printf("n%d: ", i+1); 
 scanf("%d", &n[i]); 
 printf("r%d: ", i+1); 
 scanf("%d", &r[i]); 
 } 
  
 // Solve the system of congruences using the Chinese Remainder  
Theorem 
 int solution = chinese_remainder_theorem(n, r, k); 
  
 // Output the smallest solution 
 printf("The smallest solution is: %d\n", solution); 
  
 return 0; 
}