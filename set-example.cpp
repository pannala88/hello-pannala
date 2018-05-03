#include <iostream>
#include <set>

using namespace std;

void setInsert(set<int>)
{
    
}
int main(int argc, char *argv[]) {
	int x=10;
	int y=25;
	int z=0;
	set<int> s;

    // Populate the set with some numbers
    for (int i = 0; i < 10; i++)
        s.insert(i);
    // Find the sum of all elems in the set
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
        z += *it;
    
    
	cout<<"Sum of all elems in Set = " << z << endl ;
	s.insert(x);
    s.insert(x);
    s.insert(y);
    s.erase(x);
    cout << "Size of Set after insertion of dups and deletions = " << s.size() << endl;
    
    // Find an elem
    if (s.find(9) == s.end())
        cout << "9 is not found\n";
    else
        cout << "9 is  found\n";
}

