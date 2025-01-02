
#include <stdio.h> 
#include <math.h> 
void isprim(int N){ 
 int i=2; 
 float R; 
 R=sqrt(N); 
 while (i<R) { 
 if (N%i==0){ 
 break; 
 } 
 i++; 
 } 
 if (i<R){ 
 printf("the number %d", N); 
 printf(" is not prime"); 
 } 
 else { 
 printf("the number %d",N); 
 printf(" is prime"); 
 } 
} 
int main() { 
 int N; 
 printf("give a number N"); 
 scanf("%d",&N); 
 isprim(N); 
 return 0; 
}