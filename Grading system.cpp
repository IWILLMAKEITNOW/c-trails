/* Eugene Githinji
bse-01-0056/2025
get the values of mathematical functions
*/

#include<iostream>
using namespace std;

int main(){
	int marks,programming,computer,maths,average,total_marks;
	cout<<"enter marks for programming"<<endl;
	cin>>programming;
	
	cout<<"enter marks for computer"<<endl;
	cin>>computer;
	
	cout<<"enter marks for maths"<<endl;
	cin>>maths;
	
	total_marks=programming + computer + maths;
	average=total_marks/3;
	
	if(average>=70&& average<=100){
		
		cout<<("your grade is A")<<endl;
		
	}
	else if(average>=60 && average<70){
		
		cout<<("your grade is B")<<endl;
	}
		
		else if(average>=50 && average<60){
			
			cout<<("you grade is C")<<endl;
			
		}
		
		else if(average>=40 && average<50){
			
			cout<<("your grade is D")<<endl;
			
		}
		else
		{
			cout<<("fail")<<endl;
		}
		return 0;
}
	
	
	
