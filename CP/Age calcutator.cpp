#include <iostream>
#include <ctime>
using namespace std;

int main() {
   // current date/time based on current system
   time_t now = time(0);
   
   // convert now to string form
char* dt = ctime(&now);
//    string time=dt;
int y,m,d;
   
tm *ltm = localtime(&now);
   
   cout << "Day: ";
   cin>>d;
   cout << "Month: ";
   cin>>m;
   cout << "Year: ";
   cin>>y;
   cout << " Year:" << (1900 + ltm->tm_year)-y;
   cout << " Month: "<< (1 + ltm->tm_mon)-m;
   cout << " Day: "<< (ltm->tm_mday)-d;

   
   
}
