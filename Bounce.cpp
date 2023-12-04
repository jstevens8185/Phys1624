#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

void bounce(){
    ofstream output;
    output.open("results.txt");
    int initialHeight = 1000;
    float energyKept = .90;
    float currentHeight = initialHeight;
    float velocity = 0;
    int numBounces = 200;
    const float GRAVITY = 9.8;
    float timeForBounce = 0;
    float totalTime = 0;

    velocity = sqrt(2*GRAVITY*currentHeight);
    //time to reach ground for first bounce
    totalTime += (velocity/GRAVITY);
    output << "Time to reach ground from initial drop: " << totalTime << "\n\n";

    for (int i =0; i < numBounces; i++)
    {
        velocity = energyKept * velocity;
        currentHeight = (velocity*velocity)/(2*GRAVITY);
        timeForBounce = velocity/GRAVITY;
        totalTime += timeForBounce;

        output << i + 1 << " bounce:\n" << 
            "Velocity: " << velocity <<
            "\nHeight: " << currentHeight <<
            "\nTime: " << timeForBounce << 
            "\nTotal time: " << totalTime << endl << endl;


    }

    
    
    output << "velocity after " << numBounces << " is " << velocity << "m/s" << endl;
    output << "Height after " << numBounces << " is " << currentHeight << "meters" << endl;
    output << "Time for final bounce "  << timeForBounce << " seconds\n";
    output << "Total time elapsed " << totalTime << " seconds";
}