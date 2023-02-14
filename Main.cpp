// sheet 7:
// problem c:
#include <bits/stdc++.h>

using namespace std;
int main()
{

  // vector<int> nums(pow(10, 9)+1, 0);
  // long no_of_queries;
  // cin >> no_of_queries;
  // int operation;
  // long long value;
  // for (int i = 0; i < no_of_queries; i++)
  // {
  //   cin >> operation;
  //   cin >> value;

  //   if (operation == 1)
  //   {
  //     nums[value]++;
  //   }
  //   else if (operation == 2)
  //   {
  //     if (nums[value])
  //       nums[value]--;
  //   }
  //   else
  //   {
  //     cout << ((find(nums.begin(), nums.end(), value) - nums.begin()) != nums.size()) << endl;
  //   }
  // }

  return 0;
}
// --------------------------------------------------------------------

// problem b:
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

// problem a:
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