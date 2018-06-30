#ifndef SEQUENCE_H
#define SEQUENCE_H

#include<string>

class Sequence
{
private:
	std::string filename;
	std::string dna;

public:
	Sequence(std::string filename);
	int length();
	int numberOf(char);
	std::string longestConsecutive();
	std::string longestRepeated();	
};

#endif
