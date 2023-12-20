#include<iostream>
#include<vector>
#include <numeric>
#include <algorithm>
using namespace std;



int main() {
    cout << "Numver Of Elements:  ";

    int n; 
    cin>>n; 
    int a;
    vector<int> v;
 
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(auto &p : v)
    {
        cout<<p<<" ";
    }
    cout<<endl;
    cout<<"Total Elements: ";
    int b= accumulate(v.begin(),v.end(),0);
    cout<<b<< endl;



    int maxElement = *std::max_element(v.begin(), v.end());

    int minElement = *std::min_element(v.begin(), v.end());

    cout  << "maxElement:" << maxElement << endl;
    cout  << "minElement:" << minElement << endl;
    double mean = double(b) / v.size();
    cout<<"Total Average: "<< mean<< endl;

    return 0;
}




