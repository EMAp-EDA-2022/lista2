// Copyright (c) 2022

// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation
// the rights to use, copy, modify, merge, publish, distribute, sublicense,
// and/or sell copies of the Software, and to permit persons to whom the
// Software is furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF
// ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
// TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
// PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT
// SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR
// ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
// ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE
// OR OTHER DEALINGS IN THE SOFTWARE.

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <exception>
#include "./quake_heap_sol.h"

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::to_string;
using std::stringstream;
using std::exception;

string ProcessCommand(QuakeHeap<int, string> *heap, string input_line) {
  string outputLine = "";
  try {
      if (input_line == "list-heap") {
        vector<string> response = heap->ListHeap();
        outputLine = "list-heap: ";
        for (int i = 0; i < response.size(); i++) {
          outputLine = outputLine + "\n  " + response[i];
        }
      } else if (input_line.substr(0, 6) == "insert") {
        stringstream ss(input_line);
        string key, value;
        getline(ss, value, ':');
        getline(ss, value, ':');
        getline(ss, key, ':');
        heap->Insert(stoi(key), value);
        outputLine = "insert(" + key + ", " + value + "): successful";
      } else if (input_line == "clear") {
        heap->Clear();
        outputLine = "clear: sucessful";
      }
  } catch (exception& e) {
    outputLine += (input_line + ": Failure due to exception: \""
      + e.what() + "\"");
  }
  return outputLine;
}

void RunTests(QuakeHeap<int, string>* heap) {
  string line;
  while (cin >> line) {
    string outputLine = ProcessCommand(heap, line);
    cout << outputLine << endl;
  }
}


int main() {
  QuakeHeap<int, string> heap(5);
  RunTests(&heap);

  return 0;
}
