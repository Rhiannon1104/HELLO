#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;

string multiply(string num1, string num2) {
	string result;
	for (int j = num2.size()-1; j >=0; j--) {
		short int carry = 0;
		int var = 0;
		for (int i = num1.size()-1; i >=0; i--) {
			short int tmp = (num2[j] - '0') * (num1[i] - '0') + carry;
			short int remainder = tmp % 10;
			carry = tmp / 10;
			var += remainder * pow(10, (num2.size() - 1 - j)) * pow(10, (num1.size() - 1 - i));
			if (i == num1.size() - 1 && carry != 0) {
				var += carry * pow(10, (num2.size() - 1 - j)) * pow(10, (num1.size() - 1 - i)) * 10;
			}
		}

	}

	return result;
}


int main()
{
	string s1 = "1";
	for (int i = 0; i < (s1.size() + 1) / 2; i++) {
		char tmp = s1[i];
		s1[i] = s1[s1.size() - 1 - i];
		s1[s1.size() - 1 - i] = tmp;
	}
	cout << s1 << endl;

}