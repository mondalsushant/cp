// SPDX-FileCopyrightText: © 2026 Sushant Mondal <contact@sushantmondal.com>
//
// SPDX-License-Identifier: MIT
//
////////////////////////////////////////////////////////////////////////////////////////////////////
// CSES Problem Set: Increasing Array (Task 1094)                                                 //
// ---------------------------------------------------------------------------------------------- //
// Time limit: 1.00 s                                                                             //
// Memory limit: 512 MB                                                                           //
// ---------------------------------------------------------------------------------------------- //
// You are given an array of n integers. You want to modify the array so that it is increasing,   //
// i.e., every element is at least as large as the previous element.                              //
// On each move, you may increase the value of any element by one. What is the minimum number of  //
// moves required?                                                                                //
// ---------------------------------------------------------------------------------------------- //
// Input                                                                                          //
// The first input line contains an integer n: the size of the array.                             //
// Then, the second line contains n integers x_1,x_2,...,x_n: the contents of the array.          //
// ---------------------------------------------------------------------------------------------- //
// Output                                                                                         //
// Print the minimum number of moves.                                                             //
// ---------------------------------------------------------------------------------------------- //
// Constraints                                                                                    //
// 1 <= n <= 2 ... 10^5                                                                           //
// 1 <= x_i <= 10^9                                                                               //
// ---------------------------------------------------------------------------------------------- //
// Example                                                                                        //
// Input:                                                                                         //
// 5                                                                                              //
// 3 2 5 1 7                                                                                      //
// Output:                                                                                        //
// 5                                                                                              //
// ---------------------------------------------------------------------------------------------- //
// Refs: https://cses.fi/problemset/task/1094                                                     //
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  long long prev_xi;
  cin >> prev_xi;
  long long cur_xi;
  long long moves = 0;
  for (int i = 0; i < n - 1; i++)
  {
    cin >> cur_xi;
    if (cur_xi >= prev_xi)
    {
      prev_xi = cur_xi;
    }
    else
    {
      moves += prev_xi - cur_xi;
    }
  }
  cout << moves << "\n";
}
