#include <iostream>
using namespace std;
class Area
{
    double radius;
    //public:
    // Area()
    // {
       
    // }
    // ~Area(){}
    // Area(double radius)
    // {
    //     this->radius=radius;
    // }
    double calArea(double rad)
    {
        return 3.14*rad*rad;
    }

};
int main()
{   
    Area s= Area();
    cout<<s.calArea(5);
    cout<<"done";   
    return 0;
}