#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>

using namespace std;

void question1(){
    ofstream output;
    output.open("LapResults.txt");
    const double RACE_TOTAL_METERS = 5000;
    const double METERS_PER_LAP = 400;
    double hannahSpeed;
    double karaSpeed;
    double passesKaraSeconds;
    double passesKaraMeters;
    double passesKaraLaps;

    hannahSpeed = (RACE_TOTAL_METERS/15.3)/60;
    karaSpeed = (RACE_TOTAL_METERS/17.5)/60;
    passesKaraSeconds = (METERS_PER_LAP)/(hannahSpeed - karaSpeed);
    passesKaraMeters = (hannahSpeed * passesKaraSeconds);
    passesKaraLaps = (passesKaraMeters / METERS_PER_LAP);

    output << "Hannah has run exactly " << passesKaraLaps << " laps when she passes kara\n\n";
    
 
}