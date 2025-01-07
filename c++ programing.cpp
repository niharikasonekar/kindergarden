// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct info
{
    int roll;
    char section;
    
};
int main()
{
    info fv;
    info *sv=&fv;
    fv.roll=420;
    fv.section='c';
    cout<<sv->section;
}
    


