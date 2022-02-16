#include<iostream>
#include<integrator>
//A program to integrate a quadratic function of the form y = ax^2 + bx + c



int main(int argc, char const *argv[])
{
	//limits of integration
	int lLimit,uLimit;
	//weights of the quadratic equation
	float a,b,c;
	//sample rate in order of Hz (assuming equation c=varies with time)
	float sampleRate;
	std::cout<<"Enter weights of the quadratic function, the sample rate and the limits of integration"<<std::endl;
	std::cin>>a>>b>>c>>sampleRate>>lLimit>>uLimit;
	std::cout<<"The function is y = "	<<a<<"t^2 + "<<b<<"t + "<<c<<std::endl;

	std::cout<<"The integral of the equation is "<<linIntegrate(a,b,c,sampleRate,lLimit,uLimit)<<std::endl;
	//parIntegrate();
	

	return 0;
}