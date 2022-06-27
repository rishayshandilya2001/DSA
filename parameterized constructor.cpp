#include <iostream>
using  namespace std;

class cricketer
{
    private:
    string team;
    
   
    public:
    cricketer(string name)
    {
        team=name;
    }
    void display()
    {
        cout<<team;
    }
    
    
};

int main()
{
  cricketer c2("mumbai");
  c2.display();
  
  
  


 
}
