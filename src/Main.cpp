#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int targetHeight = 3000;
    int currentHeight = 0;
    int days = 0;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    while (currentHeight < targetHeight) {
        // Generate a random number between 100 and 300
        int metersClimbed = (rand() % 201) + 100;
        currentHeight += metersClimbed;
        days++;
        std::cout << "Day " << days << ": Climbed " << metersClimbed 
                  << " meters. Current height: " << currentHeight 
                  << " meters." << std::endl;
    }

    std::cout << "The hiker reached the summit in " << days << " days!" 
              << std::endl;

    return 0;
}