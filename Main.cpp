// sheet 7:
// problem D:

#include <bits/stdc++.h>
using namespace std;

int main()
{

  return 0;
}
// problem C:
// #include <bits/stdc++.h>
// using namespace std;

// pair<bool, int> checkIfNumberExists(map<int, unordered_set<int>> &mp, int value)
// {

//   pair<bool, int> exists = {false, 0};
//   for (int i = 0; i < mp.size(); i++)
//   {
//     if (i == 0)
//       continue;
//     else if (mp[i].count(value))
//     {
//       exists.first = true;
//       exists.second = i;
//       break;
//     }
//   }

//   return exists;
// }

// void insertAnElement(map<int, unordered_set<int>> &mp, int value)
// {
//   pair<bool, int> exists = checkIfNumberExists(mp, value);

//   mp[exists.second + 1].insert(value);

//   if (exists.second)
//   {
//     mp[exists.second].erase(value);
//   }
// }

// void deleteAnElement(map<int, unordered_set<int>> &mp, int value)
// {
//   pair<bool, int> exists = checkIfNumberExists(mp, value);

//   if (exists.first)
//   {
//     mp[exists.second].erase(value);
//     if (exists.second > 1)
//       mp[exists.second - 1].insert(value);
//   }
// }

// int main()
// {

//   // mp [no. of occurrencies, values inside it];
//   map<int, unordered_set<int>> mp;
//   mp[0] = {0};
//   long no_of_queries;
//   cin >> no_of_queries;
//   int operation;
//   long long value;

//   for (int i = 0; i < no_of_queries; i++)
//   {
//     cin >> operation;
//     cin >> value;

//     if (operation == 1)
//     {
//       insertAnElement(mp, value);
//     }
//     else if (operation == 2)
//     {
//       deleteAnElement(mp, value);
//     }
//     else if (operation == 3)
//     {
//       if (mp.count(value) && !(mp[value].empty()))
//         cout << 1 << endl;
//       else
//         cout << 0 << endl;
//     }

//   }

//   return 0;
// }
// --------------------------------------------------------------------

// problem B:
// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {

//   long no_of_elements, temp_number;
//   long prefix = 0;
//   cin >> no_of_elements;
//   vector<int> nums(pow(10, 5), 0);

//   for (int i = 0; i < no_of_elements; i++)
//   {
//     cin >> temp_number;
//     prefix += temp_number;
//     nums[i] = prefix;
//   }

//   int number_of_queries;
//   cin >> number_of_queries;
//   int l, r;

//   for (int i = 0; i < number_of_queries; i++)
//   {
//     cin >> l >> r;
//     cout << nums[r] - ((l > 0) ? nums[l - 1] : 0) << endl;
//   }

//   return 0;
// }
// --------------------------------------------------------------------

// problem A:
// #include <bits/stdc++.h>

// using namespace std;

// string checkArraySequence(int number_of_elements)
// {

//   int number;
//   vector<int> nums(pow(10,5),0);
//   string result = "prekrasnyy";
//   for (int i = 0; i < number_of_elements; i++)
//   {
//     cin >> number;
//     nums[number]++;

//     if (nums[number] > 1)
//     {
//       result = "ne krasivo";
//     }
//   }

//   return result;
// }

// int main()
// {

//   int no_of_test_cases, number_of_elements;
//   cin >> no_of_test_cases;

//   for (int i = 0; i < no_of_test_cases; i++)
//   {
//     cin >> number_of_elements;
//     cout<<checkArraySequence(number_of_elements)<<endl;
//   }

//   return 0;
// }

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
