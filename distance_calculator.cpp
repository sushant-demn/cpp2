# include<iostream>
#include <cmath>
using namespace std;
class point{
    int a ; int b;
    friend void dist(point o1, point o2);
    public:
    point(){
        cout<<"Whats the x coordinate for the point\n";
        cin>>a;
        cout<<"Whats the y coordinates for the point\n";
        cin>>b;
    }
};
void dist(point o1 , point o2){
    float a = pow((o1.a - o2.a), 2);
    float b = pow((o1.b - o2.b), 2);
    float c = sqrt(a + b);
    cout<<c<<"\n";

}
int main(){
    point a;
    point b;
    dist(a , b);
    return 0;
}