#include <iostream>
#include <string>


//1+2+3+...+100==n*(n+1)/2

//让编译器程序自动生成程序
template<int n>
struct Sum
{
		enum Value { N = Sum<n - 1>::N + n }; //Sum(n)=Sum(n-1)+n
};
template<>
struct Sum<1>
{
	enum Value { N = 1 }; //n = 1
};




int main()
{
	std::cout<<Sum<100>::N<<std::endl;
	return 0;
}


