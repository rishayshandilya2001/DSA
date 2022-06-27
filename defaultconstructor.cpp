#include <iostream>
using  namespace std;

class cricketer
{
    private:
    string team;
    
   
    public:
    cricketer(string name="delhi")
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
  cricketer c2;
  c2.display();
  
  
  


 
}
