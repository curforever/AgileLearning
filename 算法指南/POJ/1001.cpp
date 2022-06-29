#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include <map>
#include <queue>
#include <algorithm>
#include <math.h>
#include <cstdio>
using namespace std;

void quickPower(double s, int n) {
	double res = 1;
	while(n) {
		if(n%2==1) {
			res *= s;
		}
		s *= s;
		n /= 2;
	}
	cout << res;
}

int main() {
	double s = 0.0;
	int n = 0;
	while(cin >> s >> n) {
		quickPower(s, n);
	}
}
