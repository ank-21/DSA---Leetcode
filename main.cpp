#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v = {1,3,4,5,6};

    for(int i:v){
        cout<<i<<" "<<v[i]<<endl;
    }
    
}
