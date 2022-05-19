#include<iostream>
using namespace std;
class Area{
public:
    int length, width,area;
    void find_area()
    {
        area=length*width;
    }

    void display()
    {
        cout<<"Area of rectangle is:"<<area<<endl;
    }
};
int main()
{
    Area A;
    cout<<"Enter Length and Width of a Rectangle:"<<endl;
    cin>>A.length>>A.width;
    A.find_area();
    A.display();
    return 0;
}
