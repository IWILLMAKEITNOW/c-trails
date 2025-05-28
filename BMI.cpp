/*
	NAME: Eugene Githinji
	REG NO.: BSE-01-0056/2025
	DESCRIPTION: CPP CODE FOR ZETECH GRADING SYSTEM 
*/
#include<iostream>
using namespace std;
int main()
{
	float weight,height,BMI; //DECLARATION OF VARIABLES TO BE USED IN PROGRAM
	
	cout<<"ENTER YOUR WEIGHT IN KILOGRAMS: ";
	cin>>weight;
	
	cout<<"ENTER YOUR HEIGHT IN METERS: ";
	cin>>height;
	
	BMI = weight/(height*height);
	
	cout<<"YOUR BMI IS: "<<BMI;
	
	
	
	if(BMI<18.5)
	{
		cout<<"\nyou are Underweight";
	}
	
	else if(BMI>=18.5 && BMI<=24.9)
	{
		cout<<"\nyou are Normal weight";
	}
	
	else if(BMI>=25 && BMI<=29.9)
	{
		cout<<"\nyou are Overweight";
	}
	
	else if(BMI>30)
	{
		cout<<"\nyou are Obersity";
	}
	
	return 0;
}
