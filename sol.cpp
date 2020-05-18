#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[] = {1,2,3,4,5};
	int n = sizeof(a)/sizeof(a[0]);
	int num;
	cin >> num;
	auto k = lower_bound(a, a+n, num)-a;
	if(k < n && a[k] == num){
		cout << "index: " << k;
	}
	cout << "\n";
	return 0;
}
