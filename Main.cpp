#include <bits/stdc++.h>

using namespace std;

long long convertDecimalToBinary(long long i)
{

  int power = 0;
  int output = 0;

  while (i != 0)
  {
    if (i % 2)
      output += 1 * pow(10, power);
    i /= 2;
    power++;
  }
  return output;
}

long long convertBinaryToDecimal(long long i)
{

  int rem;
  int output = 0;
  int count = 0;
  while (i != 0)
  {
    rem = i % 10;
    i /= 10;
    output += rem * pow(2, count);
    count++;
  }
  return output;
}

long long setNumber(long long num, int idx)
{
  return num |= (1 << idx);
}

long long resetNumber(long long num, int idx)
{
  return num &= ~(1 << idx);
}

long long flipNumber(long long num, int idx)
{
  return num ^= (1 << idx);
}

int returnBit(long long num, int idx)
{
  return (num >> idx) & 1;
}

long long rotateNumber(int num, int idx)
{
  for (int i = 0; i < idx; i++)
  {
    int y = returnBit(num, 0);
    num >>= 1;
    if (y)
      num = setNumber(num, 31);
    else
      num = resetNumber(num, 31);
  }

  return num;
}

int count_1_bits(long long x)
{
  // int count = 0;
  // int y = 0;
  // while (x)
  // {
  //   y = returnBit(x,0) & 1;
  //   if(y)
  //   count++;
  //   x>>=1;
  // }

  // return count;
  // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

  int count = 0;
  while (x)
  {
    x &= (x - 1);
    count++;
  }
  return count;
}

long long flip_32_bts(long long x)
{

  for (int i = 0; i < 32; i++)
    x = flipNumber(x, i);

  return x;
}

int uniqueNumber(vector<int> &nums)
{
  int output = 0;
  for (int i = 0; i < nums.size(); i++)
    output ^= nums[i];
    return output;
}

int main()
{
vector<int> v{9,1,2,2,1};
cout<<uniqueNumber(v)<<endl;
  // cout << bitset<32>(x) << endl;
  // cout << flip_32_bts(x) << endl;
  // cout << bitset<32>(flip_32_bts(x)) << endl;

  return 0;
}