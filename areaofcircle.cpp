#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class circle
{
        float radius, area;   
    public:
        circle()
        {
                
                cin>>radius;
        }
        void calculate();  
        void display();    
};
inline void circle :: calculate()  
{
        area = 3.14 * radius * radius;
}
inline void circle :: display()
{
        cout<<"Area of circle is:"<<area;
}
int main()
{
        circle cr;   
        cr.calculate();   
        cr.display();  
        return 0;
}
