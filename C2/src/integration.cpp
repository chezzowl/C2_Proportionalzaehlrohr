#include <iostream>
#include <fstream>

using namespace std;

int main (){

double t,u,sum=0;
double t1[2500],u1[2500];
ifstream inputfile("datensatz3.txt");

for (int i=0;i<2500;i++){
inputfile>>t>>u;
t1[i]=t;
u1[i]=u;	
}

for(int i=0;i<2499;i++){
	if(u1[i]>0.05){//Schwellwert für Integration
	sum+=(t1[i+1]-t1[i])*(u1[i+1]+u1[i])/2;
	}
}
cout<<"area : "<<sum<<endl;


return 0; 
}
