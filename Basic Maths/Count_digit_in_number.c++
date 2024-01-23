#include<bits/stdc++.h>
using namespace std;

int count_digits( int n )
{
  int digits = floor(log10(n) + 1);
  return digits;
}

int main()
{
   int n = 12345;
   cout<< "Number of digits in "<<n<<" is "<<count_digits(n);
   return 0;
}
