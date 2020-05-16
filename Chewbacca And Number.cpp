//
//  Chewbacca And Number.cpp
//  
//
//  Created by Naman on 15/05/20.
//
#include<iostream>

using namespace std;

int main(){
    long long int number, remainder, multiplier;
    long long int answer;
    answer =0;
    multiplier=1;
    
    cin>>number;
    
    while(number!=0){
        remainder=number%10;
        
        if(remainder>=5){
            if(remainder==9 && (number/10)==0){
                // do nothing
            }
            else{
                remainder=9-remainder;
            }
        }
        remainder*=multiplier;
        answer+=remainder;
        multiplier*=10;
        number/=10;
    }
    cout<<answer;
    return 0;
}
