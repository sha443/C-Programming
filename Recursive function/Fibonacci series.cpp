#include<stdio.h>
int fib(int n);
int main()
{
    printf("Enter limit:\n");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",fib(i));
    }

}
int fib(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
