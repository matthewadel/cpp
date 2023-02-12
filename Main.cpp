#include <bits/stdc++.h>

using namespace std;

long convertDecimalToBinary(long i)
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

long convertBinaryToDecimal(long i)
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

long setNumber(long num, int idx)
{
  return num |= (1 << idx);
}

long resetNumber(long num, int idx)
{
  return num &= ~(1 << idx);
}

long flipNumber(long num, int idx)
{
  return num ^= (1 << idx);
}

int returnBit(long num, int idx)
{
  return (num >> idx) & 1;
}

long rotateNumber(long num, int idx)
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

int count_1_bits(long x)
{
  int count = 0;
  int y = 0;
  while (x)
  {
    y = returnBit(x, 0) & 1;
    if (!y)
      count++;
    x >>= 1;
  }

  return count;
  // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

  // int count = 0;
  // while (x)
  // {
  //   x &= (x - 1);
  //   count++;
  // }
  // return count;
}

long sumXor(int x)
{
  int count = 1;
  int copy_of_number = x;
  int index = 1;

  while (copy_of_number)
  {
    if (!(copy_of_number & 1))
    {
      count = 2 * count;
      index++;
    }
    copy_of_number >>= 1;
  }
  return count;
}

int main()
{

  int x;
  cin >> x;
  cout << sumXor(x) << endl;

  // 10011010
  //        0
  //        1
  //      100
  //      101
  //   100000
  //   100001
  //   100100
  //   100101

  return 0;
}