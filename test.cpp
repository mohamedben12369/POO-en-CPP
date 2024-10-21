#include <iostream>
#include <vector>

void processNumbers(const std::vector<int>& numbers) {
    int sum = 0;
    for (int number : numbers) {
        sum += number; // Traitement
    }
    std::cout << "Sum: " << sum << std::endl;
}

int main() {
    std::vector<int> myNumbers = {1, 2, 3, 4, 5, 6}; // Liste d'arguments
    processNumbers(myNumbers); 
    std::cout<<"hello worl i m ready";// Appel avec un seul argument de type vecteur
    return 0;
}
