#ifndef QUAKE_HEAP_H_
#define QUAKE_HEAP_H_

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

#include <vector>
#include <list>
#include <string>

using std::string;
using std::vector;
using std::list;

template<class T1, class T2>
class QuakeHeap {
    struct Node{
        T1 key;
        T2 value;
        int level;
        Node* left;
        Node* right;
        Node* parent;

        Node(T1, T2);
    };


 public:
    struct Locator {
        QuakeHeap<T1, T2>::Node* u;

        explicit Locator(Node*);
    };

    //  Constructor que irá criar uma Quake Heap
    //  com um número definido de níveis
    explicit QuakeHeap(int);

    //  Irá apagar todos os nós salvos na heap e zerar a contagem
    void Clear();

    //  Irá criar um novo nó com (key, value) e adicionar na árvore
    Locator Insert(T1, T2);

    vector<string> ListHeap();
};

#include "quake_heap.hpp"

#endif  // QUAKE_HEAP_H_
