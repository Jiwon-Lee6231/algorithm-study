// #include "pch.h"
#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");
	/*
	¾ËÆÄºª °³¼ö

	map<char, int> ch;
	map<char, int>::iterator it;
	char a[100];
	cin >> a;

	for (int i = 0; a[i] != '\0'; i++) {
		ch[a[i]]++;
	}

	for (it = ch.begin(); it != ch.end(); it++) {
		cout << it->first << ' ' << it->second << endl;
	}
	*/

	map<string, int> ch;
	map<string, int>::iterator it;
	string a;
	// char a[100];
	int n;

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		ch[a]++;
	}

	int max = 0;
	string res;

	for (it = ch.begin(); it != ch.end(); it++) {
		if (it->second > max) {
			max = it->second;
			res = it->first;
		}

		cout << it->first << ' ' << it->second << endl;
	}
	
	cout << res << " : " << max << endl;

	return 0;
}

