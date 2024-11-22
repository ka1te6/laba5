#include <iostream>
#include <cstdlib>
#include "func.h"

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <A> <B>" << std::endl;
        return 1;
    }

    int A = std::atoi(argv[1]);
    int B = std::atoi(argv[2]);

    std::cout << "Iterative approach:" << std::endl;
    std::vector<int> iterativeSequence = generateSequenceIterative(A, B);
    printSequence(iterativeSequence);

    std::cout << "Recursive approach:" << std::endl;
    std::vector<int> recursiveSequence = generateSequenceRecursive(A, B);
    printSequence(recursiveSequence);

    return 0;
}
