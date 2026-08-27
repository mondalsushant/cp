// SPDX-FileCopyrightText: © 2026 Sushant Mondal <contact@sushantmondal.com>
//
// SPDX-License-Identifier: MIT
//
////////////////////////////////////////////////////////////////////////////////////////////////////
// CSES Problem Set: Repetitions (Task 1069)                                                      //
// ---------------------------------------------------------------------------------------------- //
// Time limit: 1.00 s                                                                             //
// Memory limit: 512 MB                                                                           //
// ---------------------------------------------------------------------------------------------- //
// You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is   //
// to find the longest repetition in the sequence. This is a maximum-length substring containing  //
// only one type of character.                                                                    //
// ---------------------------------------------------------------------------------------------- //
// Input                                                                                          //
// The only input line contains a string of n characters.                                         //
// ---------------------------------------------------------------------------------------------- //
// Output                                                                                         //
// Print one integer: the length of the longest repetition.                                       //
// ---------------------------------------------------------------------------------------------- //
// Constraints                                                                                    //
// 1 <= n <= 10^6                                                                                 //
// ---------------------------------------------------------------------------------------------- //
// Example                                                                                        //
// Input:                                                                                         //
// ATTCGGGA                                                                                       //
// Output:                                                                                        //
// 3                                                                                              //
// ---------------------------------------------------------------------------------------------- //
// Refs: https://cses.fi/problemset/task/1069                                                     //
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <string>
using namespace std;

int main()
{
  string dna_seq;
  cin >> dna_seq;
  size_t dna_seq_size = static_cast<size_t>(dna_seq.size());
  int cur_len = 1;
  int max_len = 1;
  for (size_t i = 1; i < dna_seq_size; i++)
  {
    if (dna_seq[i - 1] == dna_seq[i])
    {
      cur_len += 1;
    }
    else
    {
      cur_len = 1;
    }
    if (cur_len > max_len)
    {
      max_len = cur_len;
    }
  }
  cout << max_len << "\n";
}
