#include "func.h"
#include <iostream>
#include <vector>

std::vector<int> generateSequenceIterative(int A, int B) {
    std::vector<int> sequence;
    if (A < B) {
        for (int i = A; i <= B; ++i) {
            sequence.push_back(i);
        }
    }
    else {
        for (int i = A; i >= B; --i) {
            sequence.push_back(i);
        }
    }
    return sequence;
}

std::vector<int> generateSequenceRecursive(int A, int B) {
    if (A == B) {
        return { A };
    }
    std::vector<int> sequence = { A };
    if (A < B) {
        std::vector<int> tail = generateSequenceRecursive(A + 1, B);
        sequence.insert(sequence.end(), tail.begin(), tail.end());
    }
    else {
        std::vector<int> tail = generateSequenceRecursive(A - 1, B);
        sequence.insert(sequence.end(), tail.begin(), tail.end());
    }
    return sequence;
}

void printSequence(const std::vector<int>& sequence) {
    for (int num : sequence) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
