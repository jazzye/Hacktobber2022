//UpperBound Algorithm in CPP

#include <iostream>  
#include <vector>  
#include <algorithm>  
   
using namespace std;  
   
int main()  
{  
  int a[] = {2, 3, 5, 6, 7, 7, 7,  8, 9, 10};  
  vector<int> v(a, a+10);  
  cout <<"\nHere are the contents of v:\n";  
  for (vector<int>::size_type i=0; i<v.size(); i++)  
    cout <<v.at(i)<<" ";    
   
  vector<int>::iterator upper;  
   
  upper = upper_bound(v.begin(), v.end(), 3);  
  if (upper != v.end())  
    cout <<"\nUpper bound of 3 in v = "<<*upper;  
   
  upper = upper_bound(v.begin(), v.end(), 4);  
  if (upper != v.end())  
    cout <<"\nUpper bound of 4 in v = "<<*upper;  
   
  upper = upper_bound(v.begin(), v.end(), 5);  
  if (upper != v.end())  
    cout <<"\nUpper bound of 5 in v = "<<*upper;  
   
  upper = upper_bound(v.begin(), v.end(), 7);  
  if (upper != v.end())  
    cout <<"\nUpper bound of 7 in v = "<<*upper;  
   
  upper = upper_bound(v.begin(), v.end(), 0);  
  if (upper != v.end())  
    cout <<"\nUpper bound of 0 in v = "<<*upper;  
   
  upper = upper_bound(v.begin(), v.end(), 15);  
  if (upper != v.end())  
    cout <<"\nUpper bound of 15 in v = "<<*upper;  
  cout <<"\n\nNote that the upper bound location of 15 is \nthe end (one-past-the-last) vector position.";  
   
  return 0;  
}  
