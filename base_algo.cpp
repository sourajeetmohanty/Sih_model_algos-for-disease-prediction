/*
emplace_back();

Author: Sourajeet Mohanty
DEVCPP
NO endl only '/n'
*/
#include<bits/stdc++.h>

using namespace std;

void SIR(int s,int i,int r,double morbidity)
{
	/* s=susseptible population
	i=infected population
	r=recovered population */
	double beta;
	int total_population=s;
	int total_families=170;
	int intimacy_factor=4;
	/*this intimacy factor increases in places where trading is more, because trading means more people at work, hence more spread*/
	
	
	
	beta=(double)(total_population+(total_families+intimacy_factor))/(double)(total_families);
	/*more value means more infectious is the disease*/
	double gamma;
	 gamma=(double)1/(double)morbidity;
	//int morbidity=1/gamma;
	double infection_rate=beta*s*i/total_population;
	double transmission_index=beta/gamma;
	if(s>i/transmission_index)
	{
		cout<<"the disease will spread"<<"\n";
	}
	else
	 cout<<"the disease wont spread"<<"\n";
	 cout<<gamma/beta<<endl;
	 if(transmission_index*s>1)
	 cout<<"EPIDEMIC ALERT"<<"\n";
	 else 
	 cout<<"NO EPIDEMIC< RELAX"<<"\n";
	 double max_infected=i+s-(log(s)*((double)1/(double)transmission_index));
	 //double max_infected=abs(i-(gamma/beta)*(1+log((gamma/beta)*s)));
	 cout<<"maximum infected population will be= "<<max_infected<<"\n";
	 
	 
	
	
}
int main()
{
 int s=980;
 int i=20;
 int r=0;
 double morbidity=(double)i/(double)s;
 SIR(s,i,r,morbidity);


return 0;
}

