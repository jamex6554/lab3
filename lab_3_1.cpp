#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
using namespace std;
int main() {
    vector<int>weight(8);
    int i,number,temp,total=0;
    ifstream inFile("file.in",ios::in);
    inFile>>number;
    for(i=0;i<7;i++){
        inFile>>weight[i];
    }
    sort(weight.begin(),weight.end());
    for(i=0;i<5;i++){
        temp=weight[7-i];
	total=temp+total;
    }
    cout<<total;
    cout<<"\n";
    return 0;
}

