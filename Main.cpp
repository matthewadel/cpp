#include <bits/stdc++.h>

using namespace std;

long long convertDecimalToBinary(int i)
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

int convertBinaryToDecimal(int i)
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

int setNumber(int num, int idx)
{
  return num |= (1 << idx);
}

int resetNumber(int num, int idx)
{
  return num &= ~(1 << idx);
}

int flipNumber(int num, int idx)
{
  return num ^= (1 << idx);
}

int returnBit(int num, int idx)
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

int main()
{

  cout << bitset<32>(1646) << endl;
  cout << bitset<32>(rotateNumber(1646, 8)) << endl;

  return 0;
}