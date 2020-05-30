//  String Sort.cpp
//  Enter various strings and sort them lexicographically
//  Also if one string is prefix of another print longer one first
//
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool myCompare(string a, string b) {
    if (a.find(b)==0 || b.find(a)==0)
        return a.length() > b.length();
    return a < b;
}

int main() {
    int n;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    sort(arr, arr+n, myCompare);
    
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
}
