#include"Sequence.h"
#include<iostream>
#include<string>
#include<time.h>

using namespace std;

int main()
{
	double time=clock();
	Sequence sequence("dna.txt");
	double time0=clock();
	int dnaLength=sequence.length();
	int lengthOfA=sequence.numberOf('A');
	int lengthOfC=sequence.numberOf('C');
	int lengthOfG=sequence.numberOf('G');
	int lengthOfT=sequence.numberOf('T');
	cout<<"ALL: "
	<<dnaLength<<endl<<"A: "
	<<lengthOfA<<endl<<"C: "
	<<lengthOfC<<endl<<"G :"
	<<lengthOfG<<endl<<"T: "
	<<lengthOfT<<endl;
	double time1=clock();
	cout<<"The longest consecutive numbers are: "<<sequence.longestConsecutive()<<endl;
	double time2=clock();
	cout<<"The longest repeated string is: "<<sequence.longestRepeated()<<endl;
	double time3=clock();
	cout<<(time0-time)/CLOCKS_PER_SEC<<endl;
	cout<<(time1-time0)/CLOCKS_PER_SEC<<endl;
	cout<<(time2-time1)/CLOCKS_PER_SEC<<endl;
	cout<<(time3-time2)/CLOCKS_PER_SEC<<endl;
	return 0;
}	

