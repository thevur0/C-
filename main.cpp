#include<iostream>
#include <vector>
using namespace std;
int main(int argc, char const *argv[])
{

    vector<int> vInt;
    for (size_t i = 0; i < 10; i++)
    {
        vInt.push_back(i);
        /* code */
    }
    
    for(vector<int>::iterator itor = vInt.begin();itor != vInt.end();itor++)
    {
        if (*itor == 5)
        {
            vInt.erase(itor++);
        }
    }

    for (vector<int>::iterator itor = vInt.begin(); itor != vInt.end(); itor++)
    {
        cout<<*itor;
    }
    /* code */
    return 0;
}
