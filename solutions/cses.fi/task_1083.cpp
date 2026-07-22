// SPDX-FileCopyrightText: © 2026 Sushant Mondal <contact@sushantmondal.com>
//
// SPDX-License-Identifier: MIT
//
////////////////////////////////////////////////////////////////////////////////////////////////////
// CSES Problem Set: Missing Number (Task 1083)                                                   //
// ---------------------------------------------------------------------------------------------- //
// Time limit: 1.00 s                                                                             //
// Memory limit: 512 MB                                                                           //
// ---------------------------------------------------------------------------------------------- //
// You are given all numbers between 1,2,...,n except one. Your task is to find the missing       //
// number.                                                                                        //
// ---------------------------------------------------------------------------------------------- //
// Input                                                                                          //
// The first input line contains an integer n.                                                    //
// The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive). //
// ---------------------------------------------------------------------------------------------- //
// Output                                                                                         //
// Print the missing number.                                                                      //
// ---------------------------------------------------------------------------------------------- //
// Constraints                                                                                    //
// 2 <= n <= 2 * 10^5                                                                             //
// ---------------------------------------------------------------------------------------------- //
// Example                                                                                        //
// Input:                                                                                         //
// 5                                                                                              //
// 2 3 1 5                                                                                        //
// Output:                                                                                        //
// 4                                                                                              //
// ---------------------------------------------------------------------------------------------- //
// Refs: https://cses.fi/problemset/task/1083                                                     //
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

int main()
{
  long long n;
  cin >> n;
  long long sum_expected;

  // Expected sum of the first n natural numbers.
  sum_expected = (n * (n + 1)) / 2;

  long long sum_actual;
  sum_actual = 0;
  for (long long i = 0; i < n - 1; i++)
  {
    long long m;
    cin >> m;
    sum_actual += m;
  }
  long long missing_num;
  missing_num = sum_expected - sum_actual;
  cout << missing_num;
}
