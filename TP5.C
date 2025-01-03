 
#include <stdio.h> 
void eratosthenes(int N){ 
 int prime[N+1]; 
  
 prime[0]=0; 
 prime[1]=0; 
  
 for (int i=2;i<=N;++i){ 
 prime[i]=1; 
 } 
  
 for (int i=2;i<=N;++i){
for (int j=i+1;j<=N;++j) 
 if (j%i==0 && prime[j]==1){ 
 prime[j]=0; 
 } 
 } 
  
 printf("Prime numbers up to %d",N); 
 printf(" are:"); 
 printf("\n"); 
  
 for (int i=2;i<=N;++i){ 
 if (prime[i]==1){ 
 printf(" %d",i); 
 } 
 } 
} 
int main() { 
  
 int N; 
  
 printf("Enter an integer number N "); 
 scanf("%d" ,&N); 
 eratosthenes(N); 
  
 return 0; 
}