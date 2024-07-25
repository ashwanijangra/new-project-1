// temprature converter
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    cout<<"Enter unit for conversion C/F/K :\n";
    char u;
    cin>>u;
    double  temp;
    cout<<"Enter temprature in "<<u<<":\n";
    cin>>temp;
    if (u== 67){
        cout<< temp<<" C is equal to :\n";
        cout<<( (temp* 9/5) + 32)<<" F\n";
        cout<< (temp+273.15)<<" K\n";
    }else if(u==75){
        cout << temp<<" K is equal to :\n";
        cout<<(temp-273.15)<<" C\n";
        cout<<(temp * 9/5 - 459.67)<<" F\n";

    }else if(u==70){
        cout<<temp<<" F is equal to :\n";
        cout<<((temp - 32) / 1.8 + 273.15)<<" K\n";
        cout<<( (temp - 32) + (9/5))<<" C";
    }
    

    return 0;
}