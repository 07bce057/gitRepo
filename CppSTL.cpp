#include<iostream>
#include<vector>
#include<list>
#include<iterator>
#include<algorithm>

using namespace std;

bool compare(int i1,int i2)
{
    if(i1<i2)
    return true;
    else
    return false;
}
int main()
{
    int *p;
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(1);
    //vec.push_front(5);

    /*
    p=&vec[0];

    for(int i=0;i<3;i++,p++)
    cout<<*p<<" ";
    */

    for(vector<int> :: iterator itr=vec.begin(); itr!= vec.end();itr++)
    cout<<*itr<<" ";

    vector<int> :: iterator itr=vec.begin();
    vector<int> :: iterator itr1=vec.end();

    sort(itr,itr1);
    p=&vec[0];
    cout<<"\nAfter sorting:";
    for(int i=0;i<vec.size();i++)
    cout<<vec[i]<<" ";

    return 0;
}
