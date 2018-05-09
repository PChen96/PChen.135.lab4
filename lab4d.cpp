/*
Author: Phillip Chen
Course: {135,136}
Instructor: <Alex Nikolaev
Assignment: Lab 4 task D

Input two integars to compute C(n,k)
this program can compute larger values of n and k
*/
#include <iostream>
using namespace std;

int main(){

double n = 0;
double k = 0;
double producta = 1;
double productb = 1;

cout<<"input n: ";
cin>>n;

cout<<"input k: ";
cin>>k;

for(int i = 1; i < k+1; i++){
	producta=1+(n-k)/i;
	productb=producta*productb;
	//cout<<"productb :"<<productb<<'\t'<<"i: "<<i<<endl;
	}

cout<<"C("<<n<<","<<k<<"): "<<productb<<endl;
}
