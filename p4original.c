#include<stdio.h>
int input()
{
  int n;
  printf("enter any number");
  scanf("%d",&n);
  return n;
}
int find_fibo(int n)
{
  int i,n1=0,n2=1,n3;
  for(i=2;i<n;++i)
    {
      n3=n1+n2;
      n1=n2;
      n2=n3;
    }
  return n2;
}
void output(int n,int fibo)
{
  printf("the %d is the term fibonaci series is %d",n,fibo);
}
int main()
{
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}