#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>

using namespace std;

int main() 
{
	string s1, s2;
	
	cout << "Enter the first string: ";
	cin >> s1;
	cout << "Enter the second string: ";
	cin >> s2;
	char tab1[1024], tab2[1024];
	strcpy(tab1, s1.c_str());
	strcpy(tab2, s2.c_str());
	int counter1 = 0, counter2 = 0;
	for (int i = 0; i < strlen(tab1); i++)
	{
		if (tab1[i] == 'a')
			counter1++;
		if (tab2[i] == 'a')
			counter2++;
	}
	if (counter1 > counter2)
		cout << "The first string";
	else
		cout << "The second string";
	return 0;
}
