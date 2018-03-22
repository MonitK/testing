#include<iostreatm
<<<<<<< HEAD
using namespace std;
 main()
=======
using namespace std;
 int main()
>>>>>>> testing
{
int x;
x=10;
bool b=true;
if(x<10)
{
b=false;
}
if(b==false)
{
cout<<"wrong Value"<<endl;
}
else
{
cout<<"true value"<<endl;
}
cout<<sizeof(b);
}
------------------------------------------------------------------
[user1@clab monit]$ g++ boolean.cpp -Wno-deprecated -o boolean
[user1@clab monit]$ ./boolean
true value
1

