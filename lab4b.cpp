/*
Author: Phillip Chen
Course: {135,136}
Instructor: <Alex Nikolaev
Assignment: Lab 4 task B

user inputs two intergers to compute C(n,k)
Allows the user to compute k <= n/2
if you attemp to plug in a k >n/2 you'll get the wrong answer
*/
#include <iostream>
using namespace std;

int main(){

int n = 0;
int k = 0;
int producta = 1;
int productb = 1;
int finalprod = 1;

cout<<"input n: ";
cin>>n;

cout<<"input k: ";
cin>>k;

if (k <= n/2){ //removes (n-k)! in n!/[k!(n-k)!], computes n!/k!,computes small k
	for (int factor = n-k+1; factor<= n; factor++) 
		{
		producta = producta * factor;
		//cout<<"n "<<producta<<'\t'<<" factor: "<<factor<<endl;
		}
	for (int factor = 1; factor<= k; factor++) 
		{
		productb = productb * factor;
		//cout<<"k "<<productb<<'\t'<<" factor: "<<factor<<endl;
		}
	}
finalprod = producta/productb;
	
cout<<"C("<<n<<","<<k<<"): "<<finalprod<<endl;
}
