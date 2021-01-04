#include<stdio.h>


unsigned int fibo(unsigned int n){
  if(!n):
    return 1;
  else
    return n*fibo(n-1);
}
int main(int argc, char**argv){
  int n=0;
  printf("Enter a positive number:\n");
  scanf("%u", &n);
  printf("f(%u)=%u", n, fibo(n));
  return 0;
}
