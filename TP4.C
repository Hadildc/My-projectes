
#include <stdio.h> 
int LCM(int N1,int N2){ 
 int L=N1*N2; 
 int G=N2; 
 int R=N1%N2; 
 while (R!=0){ 
 N1=N2; 
 N2=R; 
 G=N2; 
 R=N1%N2; 
 } 
 L=L/G; 
 return L; 
} 
int main(){ 
 int N1,N2,L; 
 printf("give a number N1"); 
 scanf("%d" ,&N1); 
 printf("give a number N2"); 
 scanf("%d" ,&N2); 
 L=LCM(N1,N2); 
 printf("The least common Multiple of %d" ,N1); 
 printf(" and %d",N2); 
 printf(" is %d", L); 
 return 0; 
}