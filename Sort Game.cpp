//Sort Game
//Given pair of name and salary
//Sorting them lexicographically and according to the given salary condition
//Question available on hackerblocks
#include<iostream>
#include<vector>
using namespace std;

bool compare(pair<string,int>name,pair<string,int>salary){
    if(name.second>salary.second)return true;
    if(name.second<salary.second)return false;
    return name.first<salary.first;
}
int main() {
    int cutOffSalary;
    cin>>cutOffSalary;
    int n;
    cin>>n;
    vector <pair<string,int> >v;
    int salary;
    string name;
    for(int i=0;i<n;i++){
        cin>>name>>salary;
        if(salary>=cutOffSalary){
            v.push_back(make_pair(name,salary));
        }
    }
    sort(v.begin(),v.end(),compare);
    
    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    return 0;
}
