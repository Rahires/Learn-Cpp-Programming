//Hierarchical inheritance program
#include<iostream>
using namespace std;
class GrandFather
{
public :
void set()
{
cout<<"\nI have 20 ekar land 2 bike....";
}
};
class Father :public GrandFather
{
public :
void get()
{
  cout<"\nI have 10 ekar land and 1 bike....";
}
};
class Uncle :public GrandFather
{
public :
void wait()
{
  cout<<"\nI Have 10 ekar land and 1 bike.....";
}
};
int main()
{
Uncle U;
Father F;
U.set()
U.wait();
F.set();
F.get();
return 0;
}
