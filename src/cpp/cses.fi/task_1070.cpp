// SPDX-FileCopyrightText: (C) 2026 Sushant Mondal <contact@sushantmondal.com>
//
// SPDX-License-Identifier: MIT
//
////////////////////////////////////////////////////////////////////////////////////////////////////
// CSES Problem Set: Permutations (Task 1070)                                                     //
// ---------------------------------------------------------------------------------------------- //
// Time limit: 1.00 s                                                                             //
// Memory limit: 512 MB                                                                           //
// ---------------------------------------------------------------------------------------------- //
// Input                                                                                          //
// The only input line contains an integer n.                                                     //
// ---------------------------------------------------------------------------------------------- //
// Output                                                                                         //
// Print a beautiful permutation of integers 1,2,...,n. If there are several solutions, you may   //
// print any of them. If there are no solutions, print "NO SOLUTION".                             //
// ---------------------------------------------------------------------------------------------- //
// Constraints                                                                                    //
// 1 <= n <= 10^6                                                                                 //
// ---------------------------------------------------------------------------------------------- //
// Example 1                                                                                      //
// Input:                                                                                         //
// 5                                                                                              //
// Output:                                                                                        //
// 4 2 5 3 1                                                                                      //
// ---------------------------------------------------------------------------------------------- //
// Example 2                                                                                      //
// Input:                                                                                         //
// 3                                                                                              //
// Output:                                                                                        //
// NO SOLUTION                                                                                    //
// ---------------------------------------------------------------------------------------------- //
// Refs: https://cses.fi/problemset/task/1070                                                     //
////////////////////////////////////////////////////////////////////////////////////////////////////
//
////////////////////////////////////////////////////////////////////////////////////////////////////
// Derivation:                                                                                    //
// ---------------------------------------------------------------------------------------------- //
// n = 6: 6 4 2 5 3 1 -> y                                                                        //
// n = 5: 4 2 5 3 1   -> y                                                                        //
// n = 4: 4 2 3 1     -> y (edge: 2 4 1 3 - not in the general formula)                           //
// n = 3: 2 3 1       -> n                                                                        //
// n = 2: 2 1         -> n                                                                        //
// n = 1: 1           -> y (edge: not in the general formula)                                     //
// Assume: o = largest odd, e = smallest even                                                     //
// (o - e) >= 2                                                                                   //
// (o - 2) >= 2                                                                                   //
// o >= 4                                                                                         //
// Then:                                                                                          //
// n = odd:  n = o                                                                                //
// n = even: n - 1 = o                                                                            //
// For both cases, any value in for n that is >= 5 is safe.                                       //
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string to_print;
  if (n >= 5)
  {
    int i_odd;
    int i_even;
    if (n % 2)
    {
      i_odd = n;
      i_even = n - 1;
    }
    else
    {
      i_even = n;
      i_odd = n - 1;
    }
    string evens_desc;
    string odds_desc;
    for (; i_even >= 2; i_even -= 2)
    {
      evens_desc += " " + to_string(i_even);
    }
    for (; i_odd >= 1; i_odd -= 2)
    {
      odds_desc += " " + to_string(i_odd);
    }
    to_print = evens_desc + odds_desc;
    to_print.erase(0, 1);
  }
  else if (n == 4)
  {
    to_print = "2 4 1 3";
  }
  else if (n == 1)
  {
    to_print = "1";
  }
  else
  {
    to_print = "NO SOLUTION";
  }
  cout << to_print << "\n";
}
