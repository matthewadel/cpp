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



// int getResult(int i)
// {
//   // if (power == 1)
//   //   return base;

//   // long long ans = base * getPower(base, power - 1);
//   // return ans;
//   int ans = 0;
//   if (i >= 3)
//     ans = getResult(i - 1) + getResult(i - 2);
//   else if (i == 1)
//     return 0;
//   else
//     return 1;

//   return ans;
// }

// int getSum(int no_of_elements,int i)
// {
//   int x;
//   int sum = 0;
//   if (no_of_elements == 0)
//   {
//     cout << "Case " << i << ": ";
//     return 0;
//   }
//   else
//   {
//     cin >> x;
//     sum = x + getSum(no_of_elements - 1,i);
//   }
//   return sum;
// }

// مسالتين في شيت ٢
// اخر مسالة في شيت ٤
// شيت ٥
// شيت ٦

//////////////////////////////////////////////////////////////////
// sheet 6
// problem b
// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, const char *argv[])
// {
//   long initial_strength, n;
//   cin >> initial_strength >> n;

//   int dragon_strength, bonus;

//   string will_win = "YES";
//   map<int, int> m;

//   for (int i = 0; i < n; i++)
//   {
//     cin >> dragon_strength >> bonus;
//     m[dragon_strength] = bonus;
//   }

//   for (pair<int, int> mm : m)
//   {
//     if (initial_strength > mm.first)
//     {
//       initial_strength += mm.second;
//     }
//     else
//     {
//       will_win = "NO";
//       break;
//     }
//   }

//   cout << will_win << endl;

//   return 0;
// }

//////////////////////////////////////////////////////
// sheet 5
// problem g
// #include <bits/stdc++.h>
// using namespace std;

// int main(int argc, const char *argv[])
// {

//   int t;
//   cin >> t;

//   int sum = 0;
//   int temp;

//   multiset<int> m;

//   for (int i = 0; i < t; i++)
//   {
//     cin >> temp;
//     m.insert(temp);
//     sum += temp;
//   }
//   cout << sum << endl;
//   for (int mm : m)
//   {
//     if (sum >= 0)
//     {
//       break;
//     }
//     else
//     {
//       sum -= mm;
//       t--;
//     }
//   }

//   cout << sum << endl;
//   cout << t << endl;
//   return 0;
// }

// stack problem

// #include <iostream>
// #include <vector>
// #include <queue>
// #include <stack>
//
// using namespace std;
//
// int main(int argc, const char * argv[]) {
//
//     string s;
//     cin>>s;
//
//     stack <char> st;
//
//     for (int i=0;i<s.size();i++){
//
//         if(st.empty())
//             st.push(s[i]);
//         else if(st.top()==s[i]){
//             st.pop();
//         }
//         else{
//             st.push(s[i]);
//         }
//     }
//
//
//     if(st.size())
//         cout<<"NO"<<endl;
//         else
//             cout<<"YES"<<endl;
//
//
//     return 0;
// }

// pair solution

// #include <iostream>
// #include <vector>
// #include <queue>
//
// using namespace std;
//
// int main(int argc, const char * argv[]) {
//
//
//     int n,k;
//     cin>>n>>k;
//
//     queue < pair<int,int> > q;
//     int temp;
//     int index=0;
//
//     for (int i=0;i<n;i++){
//         cin>>temp;
//         q.push({temp,index++});
//     }
//
//     int count=0;
//     while(!q.empty()){
//         int val=q.front().first-1;
//         int index=q.front().second;
//         count++;
//
//         if(q.front().second ==k && val ==0)
//             break ;
//
//         if(val>0){
//             q.push({val,index});
//         }
//         q.pop();
//
//     }
//
//     cout<<"++"<<endl;
//     cout<<count<<endl;
//
//     return 0;
// }

// الفكرة امي اخزن الرقم بعدد مرات التكرار
// #include <iostream>
// #include <map>
//
// using namespace std;
//
// int main(int argc, const char * argv[]) {
//
//    map <int, int>m;
//    int s;
//    cin>>s;
//
//    int n;
//    for (int i=0;i<s;i++){
//        cin>>n;
//        m[n]++;
//    }
//
//    for (pair<int, int> mm:m)
//        cout<<mm.first<<" "<<mm.second<<endl;
//
//    return 0;
//}

// الفكرة اني الوب علي الحروف بالascii
// #include <iostream>
// #include <vector>
// #include <algorithm>
//
// using namespace std;
//
// int main(int argc, const char * argv[]) {
//
//    string s;
//    cin>>s;
//
//    long temp_count;
//    for (int i='a';i<='z';i++){
//        temp_count=count(s.begin(),s.end(),i);
//        if(temp_count){
//            cout<<(char)i<<" : "<<temp_count<<endl;
//        }
//    }
//
//
//    return 0;
//}

// problem odd and even new idea
// #include <iostream>
// #include <vector>
// #include <algorithm>
//
//
// using namespace std;
//
// int main(int argc, const char * argv[]) {
//
//     vector<int> v;
//
//     int temp;
//     int vectorLength;
//     cin>>vectorLength;
//
//     for(int i=0;i<vectorLength;i++){
//         cin>>temp;
//         v.push_back(temp);
//     }
//
//     int idxs=0,idxe=(int)v.size()-1;
//     vector<int> outputVector(v.size());
//
//     for(int i=0;i<v.size();i++){
//         if(v[i]%2==0){
//             outputVector[idxs]=v[i];
//             idxs++;
//         }
//         else{
//             outputVector[idxe]=v[i];
//             idxe--;
//         }
//     }
//
//     for (int i=0;i<outputVector.size();i++){
//         cout<<outputVector[i]<<endl;
//     }
//
//
//     return 0;
// }

// --------------------------------------------------------

// problem F:
// #include <iostream>
// #include <vector>
// #include <deque>
// #include <stack>
// using namespace std;
// int main(int argc, const char * argv[]) {
//    int t;
//    cin>>t;
//
//
//    for (int i=0;i<t;i++){
//        int temp;
//        int n=0;
//        cin>>n;
//        stack<int> st;
//        int largest_count=0;
//        int largest_index=0;
//        for (int i=0;i<n;i++){
//            cin>>temp;
//            if(largest_count <= temp ){
//                largest_count=temp;
//                largest_index=i;
//            }
//            st.push(temp);
//        }
//
//        int desired_index=(int)st.size()-largest_index;
//        int lastIndex=0;
//
//        stack<int> inner_stack;
//        while (!st.empty()){
//            if(lastIndex % desired_index==0){
//                while(!inner_stack.empty()){
//                    cout<<inner_stack.top()<<" ";
//                    inner_stack.pop();
//                }
//            }
//                inner_stack.push(st.top());
//                st.pop();
//                lastIndex++;
//        }
//
//        while(!inner_stack.empty()){
//                cout<<inner_stack.top()<<" ";
//                inner_stack.pop();
//        }
//    }
//    return 0;
// }

// --------------------------------------------------------
// Problem J:
// #include <iostream>
// #include <vector>
// using namespace std;
//
// int main(int argc, const char * argv[]) {
//
//    long long N;
//    cin>>N;
//
//    vector <long long> A;
//    long long temp;
//    long long sumOfNumbers=0;
//
//    for (int i=0;i<N;i++){
//        cin>>temp;
//        A.push_back(temp);
//        sumOfNumbers+=temp;
//    }
//
//    long long X;
//    cin>>X;
//    long long vectorLength = (int)A.size();
//
//    long long count=0;
//    long long restOfDivision;
//
//    if(X>=sumOfNumbers){
//        count = X / sumOfNumbers * vectorLength;//6
//        restOfDivision=X % sumOfNumbers;//6
//    }
//    else{
//        restOfDivision=X;
//    }
//
//    long long subTotal=0;
//    for(int i=0;i<vectorLength;i++){
//        if(restOfDivision<subTotal){
//            count+=i;
//            break;
//        }
//        else{
//            subTotal+=A[i];
//        }
//    }
//    if(restOfDivision<subTotal){
//        count++;
//    }
//    cout<<count<<endl;
//
//
//    return 0;
//}

// problem I:
// #include <iostream>
// #include <math.h>
// #include<vector>
//
// using namespace std;
//
// int main(int argc, const char * argv[]) {
//
//    int t;
//    cin>>t;
//
//    vector<int> numberOfArrayElements;
//    vector<int> givenNumber;
//    vector<vector<int>>  v;
//
//    vector<int> temp_Vector;
//    int temp;
//
//    for (int i=0;i<t;i++){
//        cin>>temp;
//        numberOfArrayElements.push_back(temp);
//        cin>>temp;
//        givenNumber.push_back(temp);
//
//
//        vector<int> temp_Vector;
//
//        for(int j=0;j<numberOfArrayElements[i];j++){
//
//            cin>>temp;
//            temp_Vector.push_back(temp);
//        }
//
//        v.push_back(temp_Vector);
//    }
//
//    vector <string> output(t);
//    fill(output.begin(),output.end(),"No");
//    bool isValid=0;
//
//    for(int i=0;i<t;i++){
//
//        isValid=1;
//        for(int j=0;j<v[i].size();j++){
//            if(v[i][j]>givenNumber[i]){
//                isValid=0;
//                break;
//            }
//        }
//
//        if(isValid==false){
//            for(int j=0;j<v[i].size();j++){
//
//                for(int k=j;k<v[i].size();k++){
//                    if(v[i][j] + v[i][k] <= givenNumber[i]){
//                        output[i]="Yes";
//                        break;
//                    }
//                }
//
//                if(output[i]=="Yes")
//                    break;
//
//            }
//        }
//        else{
//            output[i]="Yes";
//        }
//    }
//
//    for(int i=0;i<output.size();i++){
//        cout<<output[i]<<endl;
//    }
//
//    return 0;
//}
