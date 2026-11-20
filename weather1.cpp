#include<iostream>
using namespace std;
 void findaverage(int a);
 double weather[7] ;
 double c_weather[7];
 double f_weather[7];
 int sum = 0;
 double average;
  double convertfahreint(double weather[], int n){
  	for(int i=0;i<n;i++){
  		f_weather[i] = (weather[i]*9/5)- 459.67;
  		
  		cout<<"The Temperature in fahereint is: "<<f_weather[i]<<endl;
	  }
    }
  double convertCelsius(double weather[],int n){
  	
  	for(int i=0;i<n;i++){
  	c_weather[i] = weather[i] - 273.15;
cout<<" the Temperature in Celsius is : "<<c_weather[i]<<endl;
	  }
  	cout<<endl;
  	
  }
  
  double findcount(double average, double weather[]){

  	int count = 0;
  	for(int i=0;i<7;i++){
  		if (weather[i]> average)
  		count++;
  		
	  }
cout<<"The number of temperature above average : "<<count<<endl;
  };
 
 
 	 void high_low_value(double weather[],int n){
	 	
	 	double max = weather[0];
	 	double min = weather[0];
	 	for(int i=1;i<n;i++){
	 		if(weather[i]>max)
	 		max = weather[i];
	 		if(weather[i]<min)
	 		min = weather[i];
		 }
	 cout<<"Max is : "<<max<<" and "<<" Min is: "<<min<<endl;
	 	
	 	
	 }
 int main()
 {
 	for(int i=0;i<7;i++){
 	cout<<"Enter temperature of the day  in kelvin "<<i+1<<": ";
 	cin>>weather[i];
 	sum +=weather[i];
   
 }
 	
 	
 	findaverage(sum);
 	high_low_value(weather, 7);
 	convertCelsius(weather, 7);
    convertfahreint(weather, 7);

 }




     void findaverage(int sum){
     	
     	average = sum/7.0;
     	findcount(average, weather);
     cout<<"Average is :  "<<average<<endl;
	 }