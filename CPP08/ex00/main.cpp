#include "easyfind.hpp"

int main() {
    std::vector<int> vec;

    // Remplir le vecteur avec des valeurs
    vec.push_back(1);
    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(5);

    try {
        // Rechercher une valeur qui existe
        std::vector<int>::iterator it = easyfind(vec, 3);
        std::cout << "Value found: " << *it << std::endl;
        std::cout << "Iterator value: " << std::distance(vec.begin(), it) << std::endl;
        
        // Rechercher une valeur qui n'existe pas
        it = easyfind(vec, 10);
        std::cout << "Value found: " << *it << std::endl;
    } catch (const ValueNotFoundException& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}