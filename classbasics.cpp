#include <iostream>
using  namespace std;

class cricketer
{
    public:
    string name;
    int matches;
};

int main()
{
//   cricketer c1;
//   c1.name="rishay";
//   c1.matches=25;
//   cout<<c1.name<<endl;
//   cout<<c1.matches;

cricketer* c1=new cricketer;
c1->name="rishay";
c1->matches=25;
cout<<c1->matches;
 
}
