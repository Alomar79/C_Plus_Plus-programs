#include <iostream>	// std::cout std::cin
#include <fstream>	// std::fstream
#include <string>	// std::string
#include <sstream>	// std::stringstream
#include <iomanip>	// used for beautiful output

using namespace std;

// global const variable
// It reresents max number of students we can manage with the array.
const int maxRecordCount = 100;

// all students data
// created as global arrays to not pass it to function as parameter. It's too verbose.
unsigned long int ID[maxRecordCount];
int phoneArr[maxRecordCount]; // midTermExam
string seatArr[maxRecordCount]; // finalExam
int menuArr[maxRecordCount];
string firstName[maxRecordCount];
string secondName[maxRecordCount];

string isReservedArr[maxRecordCount*7]; //projectGrade
//char studentGrade[maxRecordCount]; //


// Save all student records to file
void saveToFile ()
{
    // open file to overwrite it's content
    ofstream out1("reservations.txt");
    for(int i = 0; i < maxRecordCount; i++)
    {
        if( ID[i] != -1)   // print student's information to file if it exists
        {
            out1 << ID[i] << " " << phoneArr[i] << " "
                 << seatArr[i] << " " << menuArr[i] << " "
                 << firstName[i] << " " << secondName[i] << endl ;

        }
    }
    // close file
    out1.close();

    int location = 1;
    ofstream out2("isReserved.txt");
    while (location < maxRecordCount)
    {
        out2 <<         location << "A " << isReservedArr[(location - 1) * 7]
             << "\n" << location << "B " << isReservedArr[(location - 1) * 7 + 1]
             << "\n" << location << "C " << isReservedArr[(location - 1) * 7 + 2]
             << "\n" << location << "D " << isReservedArr[(location - 1) * 7 + 3]
             << "\n" << location << "E " << isReservedArr[(location - 1) * 7 + 4]
             << "\n" << location << "F " << isReservedArr[(location - 1) * 7 + 5]
             << "\n" << location << "G " << isReservedArr[(location - 1) * 7 + 6]
             << "\n";
        location++;
    }

    out2.close();
}

// add Reservation to the array and save to file if needed
void MakeNewReservation()
{
    cout << "Adding new Reservation to the system\n";
    cout << "==============================\n";

    // find index of Reservation which is unused (it's number is -1)
    int unusedIndex = -1;
    for(int i = 0; i < maxRecordCount; i++)
    {
        if( ID[i] == -1 )
        {
            // we found empty slot where a new record can be made
            unusedIndex = i;
            // go out of this loop
            break;
        }
    }

    // check if we can add a new Reservation
    if(unusedIndex == -1)
    {
        cout << "Can't add Reservation: array is full. Remove Reservation to add new one.\n";
        return; // exit from the function
    }

    // save Reservation data to arrays
    cout << "======================\n\n";
    cout << "Enter person's ID number: ";
    cin >> ID[unusedIndex];
    cout << "Enter person's mobile number: ";
    cin >> phoneArr[unusedIndex];
    cout << "Enter Seat Number: ";
    cin >> seatArr[unusedIndex];
    cout << "Enter menu preference (1 - Veg, 2 - Non Veg, 3 - No meal): ";
    cin >> menuArr[unusedIndex];
    cout << "Enter person's First name: ";
    cin >> firstName[unusedIndex];
    cout << "Enter person's Last name: ";
    cin >> secondName[unusedIndex];
    // save grade as letter
    //studentGrade[unusedIndex] = getGrade(unusedIndex);
    for(int i=0; i<maxRecordCount*7; i++)
    {
        int lastIndex = -1;
        if((isReservedArr[i]+"").find(seatArr[unusedIndex]+"")== std::string::npos)
        {
            string x = (isReservedArr[i]+"");
            lastIndex = x[x.length()];

            if(lastIndex == 1)
            {
                cout<<"Seat not available ! " ;
                return;
            }
            else
            {
                string z ="";
                for(int i=0; i<x.length()-1; i++)
                {
                    z=z + x[i];
                }
                isReservedArr[i] = z+"1";
            }
        }
    }



    // ask for input until user doesn't make the correct choice.
    bool correctInput = false; // we haven't read any input yet, so it's unknown => wrong by default.
    while(!correctInput)
    {
        cout << "Save (Y/N): ";
        char choice = 'N'; // init with default value;
        cin >> choice;
        // check input
        if( choice == 'Y' ||choice == 'y' )
        {
            // notify user that we save the data to the array
            cout << "Record saved ...\n";
            // save everything to the file
            saveToFile();
            // user choose one of the avaible choice, we can go out of the loop
            correctInput = true;
        }
        else if( choice == 'N' ||choice == 'n' )
        {
            cout << "Record is discarded ...\n";
            // mark this record as removed
            ID[unusedIndex] = -1;
            // user choose one of the avaible choice, we can go out of the loop
            correctInput = true;
        }
        else
        {
            // read wrong input, prompt for new choice:
            cout << "Sorry, wrong input. Choose once again please.\n";
        }
    }
}

/*
Search for a student by student id.
Return student index >= 0 if found, otherwise returns -1.
*/
/*
int findStudent(string studentId)
{
    int recordIndx = -1;
    // find student by given @studentId
    for(int i = 0; i < maxRecordCount; i++)
    {
        if( id[i] == studentId)
        {
            // student was found, save it's position in the array
            recordIndx = i;
            break;
        }
    }
    return recordIndx;
}
*/

// print menu
void printMenu()
{
    cout << "\n Airplane Reservation System\n";
    cout << "[1] Make a new Reservation \n";
    cout << "[2] List current reservations \n";
    cout << "[3] Search reservation done by certain passenger \n";

    cout << "[7] exit \n";
    cout << "---------------------\n";
    cout << " Enter your choice: ";
}

// well formatted output of student's data at index equel 'studentIndex'
void printReservation(int ReservationIndex)
{
    // std::setw() define output width
    // std::left adjust position of the output
    cout << setw(15)<< left<< ID[ReservationIndex];
    cout << setw(12)<< left<< phoneArr[ReservationIndex];
    cout << setw(8)<< left<< seatArr[ReservationIndex];
    cout << setw(8)<< left<< menuArr[ReservationIndex];
    cout << setw(16)<< left<<firstName[ReservationIndex]+" " +secondName[ReservationIndex];

    //cout << setw(8) << left << studentGrade[studentIndex] << endl;
}

// read all info about students from the file and save them to the arrays
// if it can't find the
void readFromFile()
{
    // open file in read-only mode;
    ifstream in("reservations.txt");
    if (!in.is_open())
    {
        cout << "Note: Can't find reservations.txt.\n";
        return; // exit the function
    }
    int i = 0; // record number
    // read all info about students from the file line by line
    // until the file ends!
    string line;
    while(getline(in, line))
    {
        // init stringstream with the line of text from the file
        stringstream ss(line);
        // read from string stream to our array

        //==================

        //====================
        ss  >> ID[i] >> phoneArr[i]
            >> seatArr[i] >> menuArr[i]
            >> firstName[i] >> secondName[i];

        // go to next record
        i++;
    }

    in.close();

    string str;
    int location = 0;
    ifstream infile("isReserved.txt");
    if (infile.is_open())
    {
        while(getline(infile, line))
        {
            infile >> str >> isReservedArr[location];
            location++;
        }
        infile.close();
    }
}

/*
Task:
    Write a function called updateGrade() that takes as parameters the
    IDstudent
    the option variable Opt (1,2,3).

    If Opt is equal to "1", the MTExam is updated,
    If Opt is equal to "2", the FExam is updated.
    Finally, if Opt is equal to "3", the Project grade is updated.

    The program should check that the entered grade is between 0 and 100.
    Otherwise, re-entering a valid grade should be requested.
*/

/*
void updateGrade(string studentId, int option)
{
    // student id that needed to be changed
    int recordIndx = findStudent(studentId);

    if(recordIndx == -1 )
    {
        cout << "Student with id " << studentId << " doesn't exist!\n";
        return; // exit from the function
    }

    // upgrade grade
    int newGrade = -1;
    // validation
    // re-entere a grade until it will be valid.
    while(newGrade < 0 || newGrade > 100)
    {
        cout << "Please enter a new grade [0-100]: ";
        cin >> newGrade;
    }

    if(option == 1)
    {
        // update middle term exam grade
        midTermExam[recordIndx] = newGrade;
    }
    else if (option == 2)
    {
        // update final term exam grade
        finalExam[recordIndx] = newGrade;
    }
    else if(option == 3)
    {
        // update project grade
        projectGrade[recordIndx] = newGrade;
    }

    // update grade as letter
    studentGrade[recordIndx] = getGrade(recordIndx);
}
*/

/*
Task:
    Create a function to remove a student. You cannot remove an array element. However
    you can use a negative integer for S.No of Student to indicate a removed item. When saving
    the arrays to the file, only save items with positive S.No.
Solution:
    This function assign -1 to student's number if it's removed.
*/

/*
void removeStudent(string studentId)
{
    // student id that needed to be changed
    int recordIndx = findStudent(studentId);
    if(recordIndx == -1 )
    {
        cout << "Student with id " << studentId << " doesn't exist!\n";
    }
    else
    {
        ID[recordIndx] = -1;
    }
}
*/

// Print all students which has grade equel @gradeValue
/*
void printStudentsByGrade(char gradeValue)
{
    for(int i = 0; i < maxRecordCount; i++)
    {
        // check if the student exit and it's grade is equel 'gradeValue'
        if( ID[i] != -1 && studentGrade[i] == gradeValue)
        {
            // print data about this student
            printStudent(i);
        }
    }
    cout << endl;
}
*/




int main()
{
    // assign -1 to all student numbers because there are unused now (empty).
    for (int i = 0; i < maxRecordCount; i++)
    {
        ID[i] = -1;
    }
    for (int i = 0; i < maxRecordCount*7; i++)
    {
        isReservedArr[i] = -1;
    }



    // Data is read from the students data file and stored in arrays of correct data type.
    //
    readFromFile();

    // program will work only with array! and save all data to file only after exit
    int option = -1;
    while(option != 11)   // 11 is an exit code
    {
        // user interface:
        printMenu();
        // read user choice
        cin >> option;
        switch(option)
        {
        case 1:
            MakeNewReservation();
            break;

        case 2:
            // print table header:
            cout << "List of Reservations\n";
            cout << "====================\n\n";
            cout << setw(10) << left << "Person ID";
            cout << setw(14) << left << "Mobile Nober";
            cout << setw(16) << left << "SeatNo";
            cout << setw(8) << left << "Menu Preference";
            cout << setw(8) << left << "Person Name";
            cout << setw(8) << left << "Project";
            cout << setw(8) << left << "Grade";
            cout << endl;
            // print all Reservations:
            for(int i = 0; i < maxRecordCount; i++)
            {
                if(ID[i] != -1)   // if Reservation exist
                {
                    printReservation(i);
                }
            }
            cout << endl;
            break;
        case 3:
            int id = 0;
            bool found = false;
            cout << "Search Reservation\n";
            cout << "===================\n\n";
            cout << "Please enter the ID number of the passenger: ";
            cin >> id;
            for (int i = 0; i < maxRecordCount; i++)
            {
                if (ID[i] == id)
                {
                    if (!found)
                    {
                        found = true;
                    }
                    printReservation(i);
                }
            }
            if (!found)
            {
                cout << "\nNo reservations found with the specified passenger ID number.";
            }
            break;
        case 7:
            saveToFile();            // save to file and exit
            cout << "Bye, see you again later!";
            break;
        }
    }
    return 0;
}
