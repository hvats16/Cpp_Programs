#include <bits/stdc++.h>
using namespace std;
  
void demo()
{ 
    // static variable
    static int count = 0;
    cout << count << " ";
    count++;
}
  
int main()
{
    for (int i=0; i<5; i++)    
        demo();
    cout << endl;
    string s = "ABCF";
    cout << s.length();
    return 0;
}


// 0 0 0 0 0 
// 0 1 2 3 4 
