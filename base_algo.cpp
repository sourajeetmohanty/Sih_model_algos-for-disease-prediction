  /*
emplace_back();

Author: Sourajeet Mohanty
DEVCPP
NO endl only '/n'
*/
#include<bits/stdc++.h>

using namespace std;
int t=8;
void SIR(long long int s,int i,int r,double morbidity,int incubation)
{
	/* s=susseptible population
	i=infected population
	r=recovered population */
	double beta;
	long long int total_population=s;
	int total_families=(s+i)/4;
	int intimacy_factor=4;
	/*this intimacy factor increases in places where trading is more, because trading means more people at work, hence more spread*/
	
	
	
	//beta=(double)(total_population)/(double)(total_families);

 if(t<10)
 beta=0.00005;
 else
 beta=0.00001;
	/*more value means more infectious is the disease*/
	double gamma;
	 gamma=(double)1/(double)incubation;
	double infection_rate=beta*s*i/total_population;
	double transmission_index=beta/gamma;
	
	double rep_factor=beta * s/gamma;
	
	if(rep_factor>1)
	{
		cout<<"the disease will spread"<<"\n";
		cout<<"one person can affect "<<rep_factor<<" persons"<<"\n";
	}
	else
	 cout<<"the disease wont spread"<<"\n";
	 
	 double max_infected=i+s-((gamma/beta)*(1+log(rep_factor)));
	 //double max_infected=i+s-(log(s)*((double)1/(double)transmission_index));
	 //double max_infected=abs(i-(gamma/beta)*(1+log((gamma/beta)*s)));
	 cout<<"maximum infected population will be= "<<max_infected<<"\n";
	 
	 
	
	
}
int main()
{
 long long int s=45400;
 int i=2100;
 int r=2500;
 double morbidity=(double)i/(double)s;
 int incubation=14;
 //cin>>incubation;
 SIR(s,i,r,morbidity,incubation);


return 0;
}

