#include<iostream>

//A program to integrate a quadratic function of the form y = ax^2 + bx + c

float linIntegrate(float a, float b, float c, float sampleRate, int lLimit, int uLimit)
{
	//printf("Integration started\n");
	//determine sample width
	float deltaT=1/sampleRate;
	//std::cout<<deltaT;
	//int numSamples=(uLimit-lLimit)*sampleRate;

	//std::cout<<"numsamples"<<numSamples<<std::endl;
	float integral=0.0;
	//create vector of samples
	for (float i = lLimit; i <= uLimit ; i+=deltaT)
	{
		integral+=(a*i*i + b*i +c)*deltaT;
	}

	return integral;
}


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