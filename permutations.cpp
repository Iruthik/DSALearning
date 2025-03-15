/*
*Section : Arrays and Strings                           
*Book    : Cracking The Coding Interview                 *Author  : Iruthik Sankar
*Question2
Given two strings ,write a method to decide if one is a permutation of the other
 *
 **/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//Sorting Function
string sortString(string s)
{

	sort(s.begin(),s.end());
	return s;
}

bool permutations(string s1, string s2)
{
	//checking two strings have same length or not
	if(s1.length() != s2.length())
	{
		return false;
	}
	
	return sortString(s1) == sortString(s2);

}

int main()
{
	string first = "abcca";
	string second = "caabc";
	
	bool result = permutations(first,second);
	if(!result)
	{
		std::cout<<first<<" "<<second<<" are not permutations"<<std::endl;
	}
	else
	{
		std::cout<<first<<" "<<second<<" are permutations"<<std::endl;
	}


	return 0;
}
