#include <cstdlib>
#include <iostream>
#include <math.h>
#include <cmath>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float sd;
	int i,n;
	double*array;
	cout<<"Input size of arroy:";
	cin>>n;
	array=new double[n];
	cout<<"Input elements of array:";
	for(i=0;i<n;i++){
		cin>>array[i];
	}
	sd=0;
	for(i=0;i<n;i++)if(array[i]>0)sd=sd+array[i];
	cout<<"sum="<<sd;
	return 0;
}
		
