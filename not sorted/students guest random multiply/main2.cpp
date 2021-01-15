#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    int n ; // number of students.
    int correctAnswers = 0; // the number of true answers.
    int min =1 , max =10; // upper and lower of range for random numbers.
    int n1 , n2;        // random numbers
    string name;
    int age , result;
    ofstream outfile ;
    ifstream inputfile ;


    cout << "Please provide a number of students between 1 and 5 : " ;
    cin >> n ;
    // keep ask the user to enter number between 1 and 5
    while (n < 1 || n > 5)
    {
        cout << "Please provide a number of students between 1 and 5 : " ;
        cin >> n ;
    }
    //remove old text from the file
    outfile.open("Answers.txt");
    outfile<<"";
    outfile.close();
    // all tasks for every student
    for(int i=1 ; i<=n; i++)
    {

        cout << "\n\nStudent "<< i << ":"<< endl;
        cout << "Please enter your name: " ;
        cin.ignore();
        getline(cin , name);
        cout << "Please enter your age: " ;
        cin>> age;
        for(int j=1; j<=3 ; j++)
        {
            srand((unsigned)time(0));
            n1 = (rand() % (max - min + 1)) + min;
            n2 = (rand() % (max - min + 1)) + min;
            cout << "Guess the result of "<< n1 << " x " <<n2 <<" : ";
            cin >> result ;
            if(result == n1*n2)
            {
                cout << "Correct answer. \n" ;
                correctAnswers += 1 ;
            }
            else
            {
                cout << "Wrong answer. \n" ;
            }
        }

        cout <<"You have "<< correctAnswers <<" correct answers and "<< 3 - correctAnswers <<" wrong answer\n";
        // writing to the file
        if(correctAnswers >= 1)
        {
            outfile.open("Answers.txt", ios::out|ios::app);
            outfile<<"\n"<< name <<" "<< age <<" "<< correctAnswers ;
            correctAnswers = 0 ;
            outfile.close();
        }
    }

    cout <<"\n\nThe students that have 2 or more correct answers are: \n\n";
    inputfile.open("Answers.txt");
    while(! inputfile.eof())
    {
        string lastName = " ";
        inputfile >> name >>lastName >>age >> correctAnswers;

        if(correctAnswers >=2)
        {
            cout << name<<" "<<lastName<< ", " << "age:"<<age ;
            cout << "\t, number of correct answers: "<<correctAnswers << endl;
        }
    }
    inputfile.close();

    return 0;
}
