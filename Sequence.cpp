#include<iostream>
#include"Sequence.h"
#include<string>
#include<fstream>
#include<cstdlib>

using namespace std;

Sequence::Sequence(string name):filename(name)
{
}


int Sequence::length()
{
	int length=0;
	ifstream inputFile;
	inputFile.open(filename);
	if(!inputFile)
	{
		exit(1);
	}
	else
	{
		while(inputFile.peek()!=EOF)
		{
			int temp;
			temp=inputFile.get();
			if(temp!='\n')
			{
				length++;
			}
		}
	}
	return length;
}

int Sequence::numberOf(char base)
{
	int number=0;
	ifstream inputFile;
	inputFile.open(filename);
	if(!inputFile)
	{
		return 1;
	}
	else
	{
		while(!inputFile.eof())
		{
			int temp;
			temp=inputFile.get();
			if(temp==base)
			{
				number++;
			}
		}
	}
	return number;
	
}

string Sequence::longestConsecutive()
{
	int length_of_longest=0;
	char longest;
	char a,b;
	int number=0;
	ifstream inputFile;
	inputFile.open(filename);
	if(!inputFile)
	{
		exit(1);
	}
	else
	{
		a=inputFile.get();
		number++;
		while(inputFile.peek()!=EOF)
		{
			char temp;
			temp=inputFile.get();
			if(temp!='\n')
			{
				b=temp;
			}
			if(a==b)
			{
				number++;
			}
			else
			{
				if(number>length_of_longest)
				{
					length_of_longest=number;
					longest=a;
				}
					a=b;
					number=1;
			}
		}
	}
	string s="";
	s.resize(length_of_longest,longest);
	return s;
}


string Sequence::longestRepeated()
{
	int length_of_longest=2;
	int start=0;
	int end=0;
	int length=this->length();
	string a;
	string b;
	int c=0;
	while(length_of_longest<length)
	{
		c=0;
		for(int i=0;i<length-length_of_longest;i++)
		{
			a=string(&dna[i],&dna[i+length_of_longest]);
			for(int j=i+1;j<=length-length_of_longest;j++)
			{
				b=string(&dna[j],&dna[j+length_of_longest]);
				if(a==b)
				{
					start=i;
					end=i+length_of_longest;
					c=1;
					break;
				}
			}
			if(c==1)
			{
				break;
			}
		}
		length_of_longest++;
	}
	return string(&dna[start],&dna[end]);
}


	

	






