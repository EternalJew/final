#include <iostream>
#include <math.h>
#include <cmath>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int i,n,m;
	m=0;
	double*array;
	cout<<"number of workers:";
	cin>>n;
	array=new double[n];
	for(i=0;i<n;i++){
	cout<<"employee["<<i+1<<"]=";
	cin>>array[i];}
	int max=array[0];
	for(i=0;i<n;i++){
		if(array[i]>max){
			max=array[i];m=i;}}
			cout<<"the highest salary="<<max;
			cout<<"\nemployee number="<<m+1;
	return 0;
}
