#include <iostream>	// std::cout std::cin
#include <fstream>	// std::fstream
#include <string>	// std::string
#include <sstream>	// std::stringstream
#include <iomanip>	// used for beautiful output

using namespace std;

// global const variable
// It reresents max number of students we can manage with the array.
const int maxRecordCount = 10;

// all students data
// created as global arrays to not pass it to function as parameter. It's too verbose.
int studentNumber[maxRecordCount];
string id[maxRecordCount];
string firstName[maxRecordCount];
string secondName[maxRecordCount];
int midTermExam[maxRecordCount];
int finalExam[maxRecordCount];
int projectGrade[maxRecordCount];
char studentGrade[maxRecordCount];


// Save all student records to file
void saveToFile ()
{
    // open file to overwrite it's content
    ofstream out("students.txt");
    for(int i = 0; i < maxRecordCount; i++)
    {
        if( studentNumber[i] != -1)   // print student's information to file if it exists
        {
            out << studentNumber[i] << " " << id[i] << " "
                << firstName[i] << " " << secondName[i] << " "
                << midTermExam[i] << " " << finalExam[i] << " "
                << projectGrade[i] << " " << studentGrade[i] << endl ;
        }
    }
    // close file
    out.close();
}

// Calculate a grade of the choosen student
int calculateGrade(int studentIndex)
{
    // use formula from the assignment
    int grade = (
                    (30 * midTermExam[studentIndex]) + (50 * finalExam[studentIndex]) + (20 * projectGrade[studentIndex])
                ) / 100;
    return grade;
}

/*
Calculate a grade of the choosen student and convert it to character (A,B,C,D,F).
- All students with A : if grade is greater than or equal 90.
- All students with B : if grade is greater than or equal 80 and less than 90.
- All students with C: if grade is greater than or equal 70 and less than 80.
- All students with D: if grade is greater than or equal 60 and less than 70.
- All students with F: if grade is less than 60.
*/
char getGrade(int studentIndex)
{
    // calculate the general grade according to the given formula
    int grade = calculateGrade(studentIndex);
    char value = 'F';
    // convert the grade to letter
    if( grade >= 90)
    {
        value = 'A';
    }
    else if(grade >= 80)
    {
        value = 'B';
    }
    else if(grade >= 70)
    {
        value = 'C';
    }
    else if(grade >= 60)
    {
        value = 'D';
    }
    return value;
}

// add student to the array and save to file if needed
void addStudent()
{
    cout << "Adding new Student to the system\n";
    cout << "==============================\n";

    // find index of student which is unused (it's number is -1)
    int unusedIndex = -1;
    for(int i = 0; i < maxRecordCount; i++)
    {
        if( studentNumber[i] == -1 )
        {
            // we found empty slot where a new record can be made
            unusedIndex = i;
            // go out of this loop
            break;
        }
    }

    // check if we can add a new student
    if(unusedIndex == -1)
    {
        cout << "Can't add student: array is full. Remove student to add new one.\n";
        return; // exit from the function
    }

    // save student data to arrays
    cout << "Enter the student number: ";
    cin >> studentNumber[unusedIndex];
    cout << "Enter the student ID: ";
    cin >> id[unusedIndex];
    cout << "Enter the student name: ";
    cin >> firstName[unusedIndex] >> secondName[unusedIndex];
    cout << "Enter the middle term exam: ";
    cin >> midTermExam[unusedIndex];
    cout << "Enter the final exam: ";
    cin >> finalExam[unusedIndex];
    cout << "Enter project grade: ";
    cin >> projectGrade[unusedIndex];
    // save grade as letter
    studentGrade[unusedIndex] = getGrade(unusedIndex);

    // ask for input until user doesn't make the correct choice.
    bool correctInput = false; // we haven't read any input yet, so it's unknown => wrong by default.
    while(!correctInput)
    {
        cout << "Save (Y/N): ";
        char choice = 'N'; // init with default value;
        cin >> choice;
        // check input
        if( choice == 'Y' )
        {
            // notify user that we save the data to the array
            cout << "Record saved ...\n";
            // save everything to the file
            saveToFile();
            // user choose one of the avaible choice, we can go out of the loop
            correctInput = true;
        }
        else if( choice == 'N' )
        {
            cout << "Record is discarded ...\n";
            // mark this record as removed
            studentNumber[unusedIndex] = -1;
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

// print menu
void printMenu()
{
    cout << "----grading system---- \n";
    cout << "[1] add student \n";
    cout << "[2] update grade \n";
    cout << "[3] remove student \n";
    cout << "[4] list student \n";
    cout << "[5] print all student with grade A \n";
    cout << "[6] print all student with grade B \n";
    cout << "[7] print all student with grade C \n";
    cout << "[8] print all student with grade D \n";
    cout << "[9] print all student with grade F \n";
    cout << "[10] grades statistics \n";
    cout << "[11] exit \n";
    cout << "---------------------\n";
    cout << " please select your option \n";
}

// well formatted output of student's data at index equel 'studentIndex'
void printStudent(int studentIndex)
{
    // std::setw() define output width
    // std::left adjust position of the output
    cout << setw(8) << left << studentNumber[studentIndex];
    cout << setw(12) << left << id[studentIndex];
    cout << setw(16) << left << firstName[studentIndex] + " " + secondName[studentIndex];
    cout << setw(8) << left << midTermExam[studentIndex];
    cout << setw(8) << left << finalExam[studentIndex];
    cout << setw(8) << left << projectGrade[studentIndex];
    cout << setw(8) << left << studentGrade[studentIndex] << endl;
}

// read all info about students from the file and save them to the arrays
// if it can't find the
void readFromFile()
{
    // open file in read-only mode;
    ifstream in("students.txt");
    if (!in.is_open())
    {
        cout << "Note: Can't find students.txt.\n";
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
        ss  >> studentNumber[i] >> id[i]
            >> firstName[i] >> secondName[i]
            >> midTermExam[i] >> finalExam[i]
            >> projectGrade[i] >> studentGrade[i];
        // go to next record
        i++;
    }

    in.close();
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
/*
Task:
    Create a function to remove a student. You cannot remove an array element. However
    you can use a negative integer for S.No of Student to indicate a removed item. When saving
    the arrays to the file, only save items with positive S.No.
Solution:
    This function assign -1 to student's number if it's removed.
*/
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
        studentNumber[recordIndx] = -1;
    }
}

// Print all students which has grade equel @gradeValue
void printStudentsByGrade(char gradeValue)
{
    for(int i = 0; i < maxRecordCount; i++)
    {
        // check if the student exit and it's grade is equel 'gradeValue'
        if( studentNumber[i] != -1 && studentGrade[i] == gradeValue)
        {
            // print data about this student
            printStudent(i);
        }
    }
    cout << endl;
}

// Find the student with greatest grades.
// Return student index or -1 if no student found
int findBestStudent()
{
    // keep index of the best student
    int bestStudentIndex = -1;
    // keep grade of the best student
    int bestGrade = 0;

    const int gradeCount = 5;
    // grades sorted from best to worst
    char gradesByDecreasingOrder[gradeCount] = {'A', 'B', 'C', 'D', 'F' };
    // loop through all grades and stop this search if we found the student with
    // the best grade.
    for(int i = 0; i < gradeCount && bestStudentIndex == -1; i++)
    {
        // look through all students
        for(int j = 0; j < maxRecordCount; j++)
        {
            // if student exist and it's grade is the greatest
            if(studentNumber[j] != -1 && studentGrade[j] == gradesByDecreasingOrder[i])
            {
                // if it's first student with the best grade OR
                // another student whose grade is the same letter but greater integer
                if( bestStudentIndex == -1 || bestGrade < calculateGrade(j))
                {
                    // we found the best grade,
                    // now update best grade and
                    bestGrade = calculateGrade(j);
                    // save index of the student who has it
                    bestStudentIndex = j;
                }
            }
        }
    }
    // return index of the best student
    return bestStudentIndex;
}

// Find the student with worst grades.
// Return student index or -1 if no student found.
// This function has the same logic as a findBestStudent() function except
// it search for grades in increasing order.
int findWorstStudent()
{
    int worstStudentIndex = -1;
    int worstGrade = 0;

    const int gradeCount = 5;
    char gradesByIncreasingOrder[gradeCount] = {'F', 'D', 'C', 'B', 'A' };
    // loop through all grades and stop this search if we found the student with
    // the worst grade.
    for(int i = 0; i < gradeCount && worstStudentIndex == -1; i++)
    {
        // look through all students
        for(int j = 0; j < maxRecordCount; j++)
        {
            // if student exist and it's grade is the lowest
            if(studentNumber[j] != -1 && studentGrade[j] == gradesByIncreasingOrder[i])
            {
                // if it's first student with the worst grade OR
                // another student whoose grade is the same letter but smaller value
                if( worstStudentIndex == -1 || worstGrade > calculateGrade(j))
                {
                    // we found the worst grade, now save index of the student who has it
                    worstGrade = calculateGrade(j);
                    worstStudentIndex = j;
                }
            }
        }
    }

    return worstStudentIndex;
}

// Print statistic data about the existing students
void printStatistic()
{
    // number of student with grade greater than 'F'
    int passingStudents = 0;
    // number of student with grade equel 'F'
    int failedStudents = 0;
    // number of all recorded students
    int studentsCount = 0;
    for(int i = 0; i < maxRecordCount; i++)
    {
        // check if record exist
        if (studentNumber[i] != -1 )
        {
            // update number of all students
            studentsCount++;
            if(studentGrade[i] != 'F')
            {
                // update number of students with grade > F
                passingStudents++;
            }
            else
            {
                // update number of students with grade = F
                failedStudents++;
            }
        }

    }
    if(studentsCount == 0)
    {
        cout << "There are no students recorded\n";
    }
    else
    {
        // Grades statistics
        //  "<< setprecision(2) << fixed" used to
        // print float number with 2 zeros after the floating point in fixed format.
        cout << "The passing rate of the students (have grade > F): "
             << setprecision(2) << fixed << 100.f * passingStudents / studentsCount  << endl;
        cout << "The failure rate of the students (have grade == F): "
             << setprecision(2) << fixed << 100.f * failedStudents / studentsCount << endl;
        cout << "The best student grades:\n";
        printStudent(findBestStudent());
        cout << "The least student grades:\n";
        printStudent(findWorstStudent());
    }
}

int main()
{
    // assign -1 to all student numbers because there are unused now (empty).
    for (int i = 0; i < maxRecordCount; i++)
    {
        studentNumber[i] = -1;
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
            addStudent();
            break;
        case 2:
        {
            string studentId;
            cout << "Enter student id of the student you wish to update: ";
            cin >> studentId;
            int opt;
            cout << "What grade do you wish to update (1, 2, 3) as (MTExam, FExam, Project): ";
            cin >> opt;
            updateGrade(studentId, opt);
        };
        break;
        case 3:
        {
            string studentId;
            cout << "Enter student id of the student you wish to remove: ";
            cin >> studentId;
            removeStudent(studentId);
        };
        break;
        case 4:
            // print table header:
            cout << "List of students:\n";
            cout << setw(8) << left << "S. No";
            cout << setw(12) << left << "IDStudent";
            cout << setw(16) << left << "Name";
            cout << setw(8) << left << "MTExam";
            cout << setw(8) << left << "FExam";
            cout << setw(8) << left << "Project";
            cout << setw(8) << left << "Grade";
            cout << endl;
            // print all students:
            for(int i = 0; i < maxRecordCount; i++)
            {
                if(studentNumber[i] != -1)   // if student exist
                {
                    printStudent(i);
                }
            }
            cout << endl;
            break;
        case 5:
            cout << "All students with A grade:\n";
            printStudentsByGrade('A');
            break;
        case 6:
            cout << "All students with B grade:\n";
            printStudentsByGrade('B');
            break;
        case 7:
            cout << "All students with C grade:\n";
            printStudentsByGrade('C');
            break;
        case 8:
            cout << "All students with D grade:\n";
            printStudentsByGrade('D');
            break;
        case 9:
            cout << "All students with F grade:\n";
            printStudentsByGrade('F');
            break;
        case 10:
            printStatistic();
            break;
        case 11:
            // save to file and exit
            saveToFile();
            cout << "Bye, see you again later!";
            break;
        }
    }
    return 0;
}
