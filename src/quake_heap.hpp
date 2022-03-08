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

#include "./quake_heap.h"
#include <vector>
#include <list>
#include <string>

using std::string;
using std::vector;
using std::list;
using std::to_string;

template<class T1, class T2>
QuakeHeap<T1, T2>::Node::Node(T1 key, T2 value) { }

template<class T1, class T2>
QuakeHeap<T1, T2>::Locator::Locator(QuakeHeap<T1, T2>::Node* u) { }

template<class T1, class T2>
QuakeHeap<T1, T2>::QuakeHeap(int n_levels) { }

template<class T1, class T2>
void QuakeHeap<T1, T2>::Clear() { }

template<class T1, class T2>
typename QuakeHeap<T1, T2>::Locator QuakeHeap<T1, T2>::Insert(
  T1 key,
  T2 value
  ) {
  return Locator();
}

template<class T1, class T2>
vector<string> QuakeHeap<T1, T2>::ListHeap() {
  return vector<string>();
}
