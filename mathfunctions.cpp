/* Eugene Githinji
bse-01-0056/2025
get the values of mathematical functions
*/

#include <iostream>
#include<cmath>
using namespace std;

int product(int x, int y);
float  division(float a, float b);

int addition(int x, int y){
    return x + y;
}

int main() {
    int sum;
    int div;
    int mult;
    int root;
    cout<<"function in c++"<<endl;
    
    //calling functions - arguments
    sum=addition(10,20);
    cout<<"the sum is "<<sum<<endl;
    
    div=division(20,5);
    cout<<"the div is "<<div<<endl;
    
    mult=product(100,150);
    cout<<"the product is "<<mult<<endl;
    
    root=sqrt(64);
    cout<<"the squareroot is:"<<root<<endl;
    
    return 0;
}

//function definition
int product(int x, int y){
    return x * y;
}
float division(float a, float b){
    return a / b;
}
int sqrt(int x){
    return x;
}
