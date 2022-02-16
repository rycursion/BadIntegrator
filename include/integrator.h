#include<cmath>

float linIntegrate(float a[], int degree, float sampleRate, int lLimit, int uLimit)
{
	//printf("Integration started\n");
	//determine sample width
	float deltaT=1/sampleRate;
	//std::cout<<deltaT;
	//int numSamples=(uLimit-lLimit)*sampleRate;

	//std::cout<<"numsamples"<<numSamples<<std::endl;
	float integral=0.0;
	//create vector of samples
	for (int j = 0; j < degree; ++j)
	{
		for (float i = lLimit; i <= uLimit ; i+=deltaT)	//for each sampling point
		{
			integral+=a[j]*pow(i,j)*deltaT;
		}

	}

	return integral;
}
