#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str; cin >> str;
	replace(str.begin(), str.end(), 'T', 'U');	
	cout << str << endl;

}
