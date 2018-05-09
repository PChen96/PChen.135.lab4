/*
Author: Phillip Chen
Course: {135,136}
Instructor: <Alex Nikolaev
Assignment: Lab 4 task A

Input two integars to computer C(n,k)
overflows at C(13,1)
*/
#include <iostream>
using namespace std;

int main(){

int n = 0;
int k = 0;
int producta = 1;
int productb = 1;
int productc = 1;
int finalprod = 1;

cout<<"input n: ";
cin>>n;

cout<<"input k: ";
cin>>k;

	for (int factor = 1; factor<= n; factor++) 
		{
		producta = producta * factor;
		//cout<<"n: "<<producta<<'\t'<<"factor: "<<factor<<endl;
		}
	for (int factor = 1; factor<= k; factor++) 
		{
		productb = productb * factor;
		//cout<<"k: "<<productb<<'\t'<<"factor: "<<factor<<endl;
		}
	for (int factor = 1; factor<= n-k; factor++) 
		{
		productc = productc * factor;
		//cout<<"n-k: "<<productc<<'\t'<<"factor: "<<factor<<endl;
		}
	finalprod = producta/(productb*productc);

cout<<"C("<<n<<","<<k<<"): "<<finalprod<<endl;
}
