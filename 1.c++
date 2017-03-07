#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int num=n,r,cnt=0;
        while(num>0){
            r=num%10;
            if(r!=0 && n%r==0)
                cnt++;
            num=num/10;
        }
        cout<<cnt<<endl;
    }
    return 0;
}

