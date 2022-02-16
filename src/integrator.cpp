#include<iostream>
#include<integrator.h>
//A program to integrate a quadratic function of the form y = ax^2 + bx + c



int main(int argc, char const *argv[])
{
	//int choice;
	int count,degree;
	int lLimit,uLimit;
	float sampleRate;
	float a[100];

	//std::cout<<"Welcome to BadIntegrator. Please select which class of function you wish to integrate";
	//std::cin<<choice;

	std::cout<<"Enter degree of the polynomial function\n";
	std::cin>>degree;
	count=degree;
	std::cout<<"Enter the coefficients of the polynomial function in descending order of degree\n";
	while(count>=0)
	{
		std::cin>>a[degree-count];
		count--;
	};
	
	std::cout<<"The function is y = "; //<<a<<"t^ + "<<b<<"t + "<<c<<std::endl;
	for (count = degree; count >=0; count--)
	{
		printf("%ft^%d+ ",a[degree-count],count );
	}
	std::cout<<std::endl;
	//limits of integration
	
	//sample rate in order of Hz (assuming equation c=varies with time)
	
	std::cout<<"Enter the sample rate and the limits of integration\n";
	std::cin>>sampleRate>>lLimit>>uLimit;
	

	std::cout<<"The integral of the equation is "<<linIntegrate(a,degree,sampleRate,lLimit,uLimit)<<std::endl;
	//parIntegrate();
	

	return 0;
}