/*
emplace_back();

Author: Sourajeet Mohanty
DEVCPP
NO endl only '/n'
*/
#include<bits/stdc++.h>
using namespace std;
/*
vector<int> arr[100001];
int vis[100001];
*/
int rain_count()
{   //The weekly number of cholera cases increased by 14% (95% confidence interval = 10.1%-18.9%) 
//for each 10-mm increase above the threshold of 45 mm 
//for the average rainfall, over lags 0 to 8 weeks. Conversely, the number of cholera cases increased by 24% (10.7%-38.6%) 
//for a 10-mm decrease below the same threshold of average rainfall, over lags 0 to 16 weeks. 
//River level partly explained the association between high rainfall and the number of cholera cases.
// Conclusions: The number of cholera cases increased with both high and low rainfall in the weeks preceding hospital visits.
// These results suggest that factors associated with river level are on the causal pathway between high rainfall and incidence of cholera.
	
	
	
}
int main()
{
string disis_name;
cin>>diss_name;
int category;   //0,1,2,3
cin>>category;
int city_max;
cin>>city_max;
float rainfall;
cin>>rainfall;
int pincode;
cin>>pincode;
string dis_id;
cin>>dis_id;
int alt;
cin>>alt;
long long int population;
cin>>population;
string age_frq;
cin>>age_frq;
long long int drink;
cin>>drink;
long long slum;
cin>>slum;

float score=0;
float temperature;
cin>>temperature;
int area_id;
cin>>area_id;

float wind;
cin>>wind;
switch(category)
{
	case:1
	//water borne
	// gastroenteritis, campylobacteriosis,
	// Escherichia coli, cholera, cryptosporiosis, hepatitis A,
	// giardiasis, salmonellosis, shigellosis, norovirus, typhoid fever
	int c=0;
	string inft="";
	string adl="";
	string t5="";
	int infant;
	int adult;
	int tw5;
	for(int i=0;i<age_frq.length();i++)
	{
		if(age_frq[i]!=',')
		{
           if(c==0)
		   {
		   	inft=inft+age_frq[i];
		   }
		   if(c==1)
		   {
		    adl=adl+age_frq[i];   	
		   }
		   if(c==2)
		   {
		     t5=t5+age_frq[i];  	
		   }			
		}
		else
		{
			c++;
			
		}
	}
	infant=stoi(inft);
	adult=stoi(adl);
	tw5=stoi(t5);
	
	if(max(max(infant,adult),tw5)==tw5 || max(max(infant,adult),tw5)==infant)
	{
		score++;
		
	}
	
	if(rainfall>=45.0)
	{   score++;
		float diff=rainfall-45.0;
		int roll=diff/10;
		score=score+(roll*0.42);
		
		
	}
	float risk=(drink/population)*100;
	if(risk>15)
	{
		score++;
		
	}
	float slum_count=(slum/population)*100;
	if(slum_count>8)
	{
		score++;
	}
	
	break;
	
	case:2
		//vector borne
		if(temperature<=25)
		{
			score++;
		}
	  if(temperature>30)
	  {
	  	score--;
	  }
	  
	  if(rainfall>60)
	  {
	  	score--
	  }
	  if(rainfall>20 && rainfall <60)
	  {
	  	score++;
	  }
	  //access the id of the adjacent cities
	  //predicts adjacent cities 
	  
	  //if(temperature>30 && )
	  
	  break;
	  
	  case:3
	  //virus borne
	  
	  if(temperature>30)
	  {
	  	score--;
	  }
	  else
	  {
	  	float trans=30-temperature;
	  	trans=trans/8;
	  	score++;
	  	score=score+trans;
	  }
	  if(wind>8.00)
	  {
	  	score++;
	  }
	  
		
}





return 0;
}

