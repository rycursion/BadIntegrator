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
