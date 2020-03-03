#include <stdio.h>
#include <iostream>
#define REM 1000000
using namespace std;

void multiply(unsigned long long F[2][2],unsigned long long M[2][2]); 

void power(unsigned long long F[2][2],unsigned long long n); /* n 번째 피보나치 숫자를 반환하는 함수 */ 

int fib(unsigned long long n) 
{ 
	unsigned long long F[2][2] = {{1,1},{1,0}}; 
	if (n == 0) return 0;
       	power(F, n-1); 
	return F[0][0]%REM; 
} /* 행렬의 멱수를 취하는 함수, 최적화 시킴 */ 
void power(unsigned long long F[2][2],unsigned long long n) 
{ 
	if( n == 0 || n == 1) return; 
	unsigned long long M[2][2] = {{1,1},{1,0}}; 
	power(F, n/2); 
	multiply(F, F); 
	if (n%2 != 0) multiply(F, M); 
} /* 행렬의 곱을 계산하는 함수, 결과값은 다시 F 에 저장됩니다. */ 
void multiply(unsigned long long F[2][2],unsigned long long M[2][2]) 
{ 
	unsigned long long x = F[0][0]*M[0][0]%REM + F[0][1]*M[1][0]%REM; 
	unsigned long long y = F[0][0]*M[0][1]%REM + F[0][1]*M[1][1]%REM; 
	unsigned long long z = F[1][0]*M[0][0]%REM + F[1][1]*M[1][0]%REM; 
	unsigned long long w = F[1][0]*M[0][1]%REM + F[1][1]*M[1][1]%REM; 
	F[0][0] = x%REM; 
	F[0][1] = y%REM; 
	F[1][0] = z%REM; 
	F[1][1] = w%REM; 
} /* 테스트를 위한 드라이버 프로그램 */ 
int main() 
{ 
	unsigned long long n;
       cin>>n;	
	cout<<fib(n)%REM;
	return 0; 
}
