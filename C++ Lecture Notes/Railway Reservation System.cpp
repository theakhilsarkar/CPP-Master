#include <iostream>
using namespace std;

class Train
{
private:
    string trainName;
    string source;
    string destination;
    string trainTime;

public:
    int trainNumber;
    static int trainCount; // 3
    // default constructor
    Train()
    {
        this->trainNumber = 0;
        this->trainName = "";
        this->source = "";
        this->destination = "";
        this->trainTime = "";
    }

    void inputTrainDetails(int trainNumber, string trainName, string source, string destination, string trainTime)
    {
        this->trainNumber = trainNumber;
        this->trainName = trainName;
        this->source = source;
        this->destination = destination;
        this->trainTime = trainTime;
    }

    void displayTrainDetails()
    {
        cout << endl;
        cout << "Train Number      - " << this->trainNumber << endl;
        cout << "Train Name        - " << this->trainName << endl;
        cout << "Train Sourse      - " << this->source << endl;
        cout << "Train Destination - " << this->destination << endl;
        cout << "Train Time        - " << this->trainTime << endl;
        cout << endl;
    }

    static int getTrainCount()
    {
        return trainCount;
    }

    ~Train()
    {
        trainCount--;
    }
};
int Train::trainCount = 0;

class RailwaySystem
{
    Train train[100];
    int totalTrains = 0;

public:
    void addTrain()
    {
        int trainNumber;
        string trainName;
        string source;
        string destination;
        string trainTime;
        cout << "Enter Train Number : ";
        cin >> trainNumber;
        cout << "Enter Train Name : ";
        cin >> trainName;
        cout << "Enter Train Source : ";
        cin >> source;
        cout << "Enter Train Destination : ";
        cin >> destination;
        cout << "Enter Train Time : ";
        cin >> trainTime;

        train[totalTrains].inputTrainDetails(trainNumber, trainName, source, destination, trainTime);
        totalTrains++;
    }

    void displayAllTrains()
    {
        cout << endl
             << "-------------------Train Details------------------" << endl;
        for (int i = 0; i < totalTrains; i++)
        {
            train[i].displayTrainDetails();
        }
        cout << endl
             << "---------------------------x-----------------------" << endl;
    }

    void searchTrainByNumber(int number)
    {
        cout << endl
             << "-------------------Train Details------------------" << endl;
        for (int i = 0; i < totalTrains; i++)
        {
            if (train[i].trainNumber == number)
            {
                train[i].displayTrainDetails();
            }
        }
        cout << endl
             << "---------------------------x-----------------------" << endl;
    }
};

int main()
{
    RailwaySystem r1;
    int choice;

    do
    {
        cout << "1. Add New Train Record" << endl;
        cout << "2. Display All Train Records" << endl;
        cout << "3. Search Train by Number" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            r1.addTrain();
            // goto start;
            break;
        case 2:
            r1.displayAllTrains();
            // goto start;
            break;
        case 3:
            int number;
            cout << "Enter train number : ";
            cin >> number;
            r1.searchTrainByNumber(number);
            // goto start;
            break;
        default:
            cout << "You are exited !";
            break;
        }
    } while (choice < 4);
    
    return 0;
}
