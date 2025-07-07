//Function Overloading
#includee<iostream>
using namespace std;
class Sample
{
public :
void Add(int x,int y)
{
cout<<"\nAdd ="<<x+y;
}
void Add(int x,int y,int z)
{
cout<<"\nAdd ="<<x+y+z;
}
};
int main()
{
Sample S;
S.Add(10.20);
S.Add(10,20,30);
return 0;
}
