#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
    // Inicializa o gerador de números aleatórios
    srand(time(0));

    // Gera 5 números aleatórios diferentes entre 1 e 50
    int numbers[5];
    for (int i = 0; i < 5; i++) {
        bool repeat;
        do {
            repeat = false;
            numbers[i] = (rand() % 50) + 1;
            for (int j = 0; j < i; j++) {
                if (numbers[i] == numbers[j]) {
                    repeat = true;
                    break;
                }
            }
        } while (repeat);
    }

    // Gera 2 números aleatórios diferentes entre 1 e 12
    int stars[2];
    for (int i = 0; i < 2; i++) {
        bool repeat;
        do {
            repeat = false;
            stars[i] = (rand() % 12) + 1;
            for (int j = 0; j < i; j++) {
                if (stars[i] == stars[j]) {
                    repeat = true;
                    break;
                }
            }
        } while (repeat);
    }

    // Imprime os números gerados
	std::sort(numbers,numbers + 5);

    std::cout << "Números: ";
    for (int i = 0; i < 5; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

	std::sort(stars,stars + 2);

    std::cout << "Estrelas: ";
    for (int i = 0; i < 2; i++) {
        std::cout << stars[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}