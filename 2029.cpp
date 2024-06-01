#include <iostream>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float v,d=0;

    while(cin >> v >> d){
        
        float r=d/2;
        float h=v/(r*r*3.14);
        float a=3.14*r*r;

        cout<< fixed<< setprecision(2);
        cout<<"ALTURA = "<<h<<endl;
        cout<<"AREA = "<<a<<endl;
        
    }

    return 0;
}