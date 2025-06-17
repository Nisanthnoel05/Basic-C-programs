#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	double mx1=(x1+x2)/2.0,my1=(y1+y2)/2.0;
	double mx2=(x1+x3)/2.0,my2=(y1+y3)/2.0;
	double m1=(y2-y1)/(x2-x1);
	double m2=(y3-y1)/(x3-x1);
	double pm1=-1/m1;
	double pm2=-1/m2;
	double cx=(my2-my1+pm1*mx1-pm2*mx2)/(pm1-pm2);
	double cy=pm1*(cx-mx1)+my1;
	cout<<fixed<<setprecision(1)<<cx<<"\n"<<cy<<endl;
	return 0;
}