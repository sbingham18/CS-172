// Scott Bingham
// CS 2 HW Ex 3.1 Palindromes
// 3/15/16
// Dr. Matthew Bell
#include <iostream>
#include <string>
#include<stack>
using namespace std;
int main()
{
	string word;
	cout << "Enter a word or sequence of characters: "; // prompts user to enter word
	cin >> word; // user enters word
	bool ispalindrome = true;
	stack<char> palindrome; // accesses the stack operator
	for (int i = 0; i < word.size(); i++) // for i is less than the number of characters in the word
	{
		palindrome.push(word[i]); // pushes the letter at character i
	}
	for (int x = 0; x < word.size(); x++) // for x is less than the number of characters in the word
	{
		if (word[x] == palindrome.top()) // checks to see if character x is the same as the character x of the reversed word
		{
			palindrome.pop(); // removes the integer at the top of the stack
		}
		else
		{
			ispalindrome = false; // sets ispalindrome to false
			break;
		}
		ispalindrome = true; // sets ispalindrome to true
	}
	if (ispalindrome == true) // if the word is a palindrome, it will output that to the user
	{
		cout << word << " is a palindrome!" << endl;
	}
	else // if the word is not a palindrome, it will output that to the user
	{
		cout << word << " is not a palindrome!" << endl;
	}
}