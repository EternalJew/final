#include <cstdlib>
#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float sd,k,sum;
	int i,n;
	double*array;
	cout<<"Input size of arroy:"<<endl;
	cin>>n;
	array=new double[n];
	cout<<"Input elements of array:"<<endl;
	for(i=0;i<n;i++){
		cin>>array[i];
	}
	sd=0;
	k=0;
	for(i=0;i<n;i++){
		if(array[i]>0){
			k++;
		   sum=sum+array[i];
		}
	}
	int ave;
	ave=sum/k;
	
	cout<<"average of positive="<<ave;
	return 0;
}
