//Reverse the array
#include <iostream>
#include<vector>
using namespace std;

vector <int> reverse (vector < int >A)
{
  int j = A.size () - 1;
  for (int i = 0; i < A.size () / 2; i++)
    {
      int temp = A[i];
      A[i] = A[j];
      A[j--] = temp;
    }

  return A;
}

int main ()
{
  vector < int >A;
  cout << "Enter size of array ";
  int size;
  cin >> size;
  for (int i = 0; i < size; i++)
    {
      A.push_back (i + 1);
    }
  vector < int >rev_array = reverse (A);
  for (int i = 0; i < rev_array.size (); i++)
    cout << rev_array[i] << " ";

  return 0;
}