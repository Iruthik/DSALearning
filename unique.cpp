/*
 * Section : Arrays and Strings 
 * Book    : Cracking The Coding Interview
 * Author  : Iruthik Sankar
 * Question 
 *implement an algoritham to determine if a string has all unique characters. What if you cannot use additional data structres
 *
 * */


#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isUniqueChars(const std::string &str){
	//ASCII values ranging from 0-127 
	//greater than 127 means the string 
	//is with out unique charactets
	if(str.length() > 128)
	{
	
		return 0;
	}

	std::vector<bool>char_set(128,false);
	//initialize vector with size 128 value false
	for(size_t i=0;i<str.length();i++){
		int val = static_cast<int>(str[i]);
		//explicitly cast char to int
		if(char_set[val]){
			return false;
		}
		char_set[val]=true;
	}
	return true;
}

int main()
{

std::string str1 = "abcde";
    std::string str2 = "aabbc";

    std::cout << "String '" << str1 << "' has unique characters: " << std::boolalpha << isUniqueChars(str1) << std::endl;
    std::cout << "String '" << str2 << "' has unique characters: " << std::boolalpha << isUniqueChars(str2) << std::endl;
return 0;
}
