
#include <stdio.h> 
int GCD(int N1,int N2){ 
 int G=N2; 
 int R=N1%N2; 
 while (R!=0){ 
 N1=N2; 
 N2=R; 
 G=N2; 
 R=N1%N2; 
 } 
 return G; 
} 
int main(){ 
 int N1,N2,G; 
 printf("give a number N1"); 
 scanf("%d" ,&N1); 
 printf("give a number N2");
scanf("%d" ,&N2); 
 G=GCD(N1,N2); 
 printf("The greatest common divisor of %d" ,N1); 
 printf(" and %d",N2); 
 printf(" is %d", G); 
 return 0; 
}