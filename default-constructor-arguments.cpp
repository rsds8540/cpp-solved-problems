#include<bits/stdc++.h>
using namespace std;

class points;

class points{
   int x,y;
   friend int distance(points,points);
   public:
   points(int a,int b){
    //    cout<<"This is an automated response from constructor."<<endl;
    //    cout<<"Enter your co ordinates: ";
    //    cin>>x>>y;
    x = a;
    y = b;

   }
};

int distance(points P,points Q){

    int x,y;
    x = pow((Q.x-P.x),2);
    y = pow((Q.y-P.y),2);
    return sqrt(x+y);
    

}
int main()
{
    points P(2,6),Q(5,2);
    cout<<"Distance is "<<distance(P,Q)<<" units"<<endl;

    return 0;
}