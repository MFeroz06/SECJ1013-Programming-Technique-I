#include <iostream>           // Nasaaie Bin Noriskamar A25CS0118
#include <fstream>            // Muhammad Fairuz Bin Herman A25CS0267
#include <iomanip>            // 12 January 2026 
#include <string>             // Set 1

using namespace std;


void displayLine(ofstream &outFile);
int findIndWinner(int totals[], int size);
int findTeamWinner(int teamTotals[], int size);

int main() {
    
    int marks[12][7];
    int participantTotals[12] = {0};
    int teamTotals[3] = {0};

    ifstream inFile("input.txt");

   
    if (!inFile) {
        cout << "Sorry, input file does not exist!" << endl;
        cout << "Press any key to continue . . ." << endl;
        cin.get(); 
        return 1;
    }

    
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 7; j++) {
            inFile >> marks[i][j];
        }
    }
    inFile.close();

  
    for (int i = 0; i < 12; i++) {
        for (int j = 2; j < 7; j++) {
            participantTotals[i] += marks[i][j];
        }
    }

    
    for (int i = 0; i < 12; i++) {
        if (i < 4) teamTotals[0] += participantTotals[i];
        else if (i < 8) teamTotals[1] += participantTotals[i];
        else teamTotals[2] += participantTotals[i];
    }

    
    ofstream outFile("output.txt");

    displayLine(outFile);
    outFile << left << setw(10) << "Id" 
            << setw(8) << "E1" << setw(8) << "E2" 
            << setw(8) << "E3" << setw(8) << "E4" 
            << setw(8) << "E5" << "Total" << endl;
    displayLine(outFile);

    for (int a = 0; a < 3; a++) {
        outFile << "TEAM " << (a + 1) << endl;
        for (int p = 0; p < 4; p++) {
            int rowIndex = (a * 4) + p;
            outFile << left << setw(10) << marks[rowIndex][1];
            for (int e = 2; e < 7; e++) {
                outFile << setw(8) << marks[rowIndex][e];
            }
            outFile << participantTotals[rowIndex] << endl;
        }
        outFile << left << setw(50) << "TOTAL" << teamTotals[a] << endl;
        displayLine(outFile);
    }

   
    int bestParticipantIdx = findIndWinner(participantTotals, 12);
    int bestTeamIdx = findTeamWinner(teamTotals, 3);

    outFile << " Winner for Individual Category: " << marks[bestParticipantIdx][1] 
            << " (Team " << marks[bestParticipantIdx][0] << ")" << endl;
    outFile << " Winner for Group Category: Team " << (bestTeamIdx + 1) 
            << " (Score = " << teamTotals[bestTeamIdx] << ")" << endl;

    outFile.close();
    cout << "Processing complete. Please check output.txt" << endl;

    return 0;
}


void displayLine(ofstream &outFile) {
    for (int i = 0; i < 50; i++) {
        outFile << "-";
    }
    outFile << endl;
}


int findIndWinner(int totals[], int size) {
    int maxIdx = 0;
    for (int i = 1; i < size; i++) {
        if (totals[i] > totals[maxIdx]) {
            maxIdx = i;
        }
    }
    return maxIdx;
}


int findTeamWinner(int teamTotals[], int size) {
    int maxIdx = 0;
    for (int i = 1; i < size; i++) {
        if (teamTotals[i] > teamTotals[maxIdx]) {
            maxIdx = i;
        }
    }
    return maxIdx;
}
