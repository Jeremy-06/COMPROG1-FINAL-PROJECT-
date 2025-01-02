//jeremy
#include<iostream>
#include<string>
#include<conio.h>

using namespace std; 

    void introduction(char next1);
    void user(string& username, string& appendname, char next1);
    void topicchoice(int& topic);
    void inputoutput(char& enter);
    void ioquestions(string appendname, int& points, char& next, char ioanswer1, string ioanswer2, char ioanswer3, string ioanswer4, char ioanswer5, char ioanswer6, string ioanswer7, string ioanswer8, string ioanswer9, string ioanswer10, string line, char skip);
    void datatypes(char& enter);
    void dtQuestions(string appendname, int& points, char& next, char dtanswer1, string dtanswer2, char dtanswer3, string dtanswer4, string dtanswer5, string line, char skip);
    void operators(char& enter);
    void opQuestions(string appendname, int& points, char& next, char opanswer1, string opanswer2, string opanswer3, char opanswer4, char opanswer5, char skip);
    void final(string& username, int points, char& again);
    
int main()
{
    string username, appendname;
    char next1, next, again, skip;
    int topic;
    char enter;
    char ioanswer1, ioanswer3, ioanswer5, ioanswer6;
    string ioanswer2, ioanswer4, ioanswer7, ioanswer8, ioanswer9, ioanswer10, line;
    char dtanswer1, dtanswer3;
    string dtanswer2, dtanswer4, dtanswer5;
    char opanswer1, opanswer4, opanswer5;
    string opanswer2, opanswer3;
    
    int points=0;
    
    introduction(next1);
    user(username, appendname, next1);
 do{ 
	topicchoice(topic);
  
    if (topic==1)
    {
        system("cls");
        inputoutput(enter);
        if (enter == 'L' || enter == 'l')
        {
            system("cls");
            ioquestions(appendname, points, next, ioanswer1, ioanswer2, ioanswer3, ioanswer4, ioanswer5, ioanswer6, ioanswer7, ioanswer8, ioanswer9, ioanswer10, line, skip);
        }
    }
    else if (topic==2)
    {
        system("cls");
        datatypes(enter);
        if (enter == 'L' || enter == 'l')
        {
            system("cls");
            dtQuestions(appendname, points, next, dtanswer1, dtanswer2, dtanswer3, dtanswer4, dtanswer5, line, skip);
        }
    }
    else if (topic==3)
    {
        system("cls");
        operators(enter);
        if (enter == 'L' || enter == 'l')
        {
            system("cls");
            opQuestions(appendname, points, next, opanswer1, opanswer2, opanswer3, opanswer4, opanswer5, skip);
        }
    }
    final(username, points, again);
	}while(again == 'y' || again == 'Y');
    return 0;
}
void introduction(char next1)
{ 
    do{
    system("cls");
    cout << "\n\n";
    cout << "\t\t=====================================================\n";
    cout << "\t\t|-|                                               |-|\n";
    cout << "\t\t ||              ^^  WELCOME TO ^^                ||\n";
    cout << "\t\t ||       * CODE QUEST: THE C++ ADVENTURE *     ||\n";
    cout << "\t\t|-|                                               |-|\n";
    cout << "\t\t=====================================================\n";
    cout << "\t\t||-                                               -||\n";
    cout << "\t\t ||-    Dive into the world of C++ programming!  -||\n";
    cout << "\t\t  ||-   Test your skills in a fun, interactive  -||\n";
    cout << "\t\t ||-    and educational journey.                 -||\n";
    cout << "\t\t||-                                               -||\n";
    cout << "\t\t=====================================================\n";
    cout << "\n\n";
    cout << "\t\tThe game is structured into key programming concepts:\n\n";
    cout << "\t\t  -------------------------------------------------\n";
    cout << "\t\t  |--|    1  INPUT AND OUTPUT                   |--|\n";
    cout << "\t\t  -------------------------------------------------\n";
    cout << "\t\t  |--|    2  DATA TYPES                         |--|\n";
    cout << "\t\t  -------------------------------------------------\n";
    cout << "\t\t  |--|    3  OPERATORS                          |--|\n";
    cout << "\t\t  -------------------------------------------------\n";
    cout << "\n";
    cout << "\t\t          Get ready to learn and explore! \n";
    cout << "\n\n";

    cout << "\n\t\t NEXT['N'] : ";
    next1 = _getch();
    if (next1=='N' || next1=='n')
    {
        system("cls");
    }
    }
    while (next1 !='N' && next1 !='n');
    
}
void user(string& username, string& appendname, char next1)
{
    
    cout << "\t\t==========================================================" << endl;
    cout << "\t\t                         PROFILE                        " << endl;
    cout << "\t\t==========================================================" << endl;
    cout << "\n\t\t  ENTER YOUR NAME: ";
 
    getline(cin, username);
    cout << "\n";
    cout << "\t\t Hi! " << username << " ,Before diving into the game,    " << endl;
    cout << "\t\t make sure you have a basic understanding of C++ concepts."<< endl;
    cout << "\t\t This will help you answer the questions more easily and"  << endl;
    cout << "\t\t enjoy the journey to becoming a coding master!"           << endl;
    cout << "\t\t==========================================================" << endl;
    do{cout << "\n\t\t NEXT['N'] : ";
    next1 = _getch();
    if (next1=='N' || next1=='n')
    {
        system("cls");
    }
    }while (next1 !='N' && next1 !='n');
    appendname = username.append("'s");
}
void topicchoice(int& topic)
{
    do {
    system("cls");
    cout << "\t\t          CHOOSE A TOPIC YOU WANT TO LEARN           " << endl;
    cout << "\n\t\t     ---------- 1. INPUT AND OUTPUT ----------     " << endl;
    cout << "\n\t\t     ---------- 2. DATA TYPES       ----------     " << endl;
    cout << "\n\t\t     ---------- 3. OPERATORS        ----------     " << endl;
    cout << "\n\n\t\t => ";
    cin >> topic;

    if (cin.fail()) {
        cin.clear();              
        cin.ignore(1000, '\n');  
        topic = 0;                
    }
    } while (topic != 1 && topic != 2 && topic != 3 && topic != 4);
}
void inputoutput(char& enter)
{
    do{
    system("cls");
    cout << "\t\t========================================================" << endl;
    cout << "\t\t             GREAT! YOU CHOOSE THE FIRST TOPIC"           << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\t\t                    INPUT AND OUTPUT                    " << endl;
    cout << "\n";
    cout << "\t\t    Master the art of interacting with users through    " << endl;
    cout << "\t\t               input and output commands.               " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n\n";
    cout << "\t\tPress 'L'  to Start Learning... : ";
    enter=_getch();
    }while(enter!='L' && enter != 'l');
}
void ioquestions(string appendname, int& points, char& next, char ioanswer1, string ioanswer2, char ioanswer3, string ioanswer4, char ioanswer5, char ioanswer6, string ioanswer7, string ioanswer8, string ioanswer9, string ioanswer10, string line, char skip)
{
//1
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : EASY                                 POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t Multiple Choice                                   \n" << endl;
    cout << "\t\t Q: Which object is used to display output in C++?      " << endl;
    cout << "\t\t a) cin"        << endl;
    cout << "\t\t b) cout"       << endl;
    cout << "\t\t c) printf"     << endl;
    cout << "\t\t d) System.out" << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t ANSWER: ";
    cin >> ioanswer1;
    if (ioanswer1 == 'b' || ioanswer1 == 'B')
    {
        cout << "\n\t\t CORRECT... +5 POINTS!!!" << endl;
        points+=5;
        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
        } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);
 //2
 	
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : EASY                                 POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t Fill in the Blank                                 \n" << endl;
    cout << "\t\t Q: Complete the code to output ""Welcome to C++!""     " << endl;
    cout << "\n";
    cout << "\t\t cout << " << '"' << "_________________" << '"' << "; "<< endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do {
    cout << "\t\t ANSWER: ";
    cin.ignore();
    getline(cin, ioanswer2);
    
    if (ioanswer2 == "Welcome to C++!") {
        cout << "\n\t\t CORRECT... +5 POINTS!!!" << endl;
        points += 5;

        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
    } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);
 //3
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : EASY                                 POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t True or False                                        \n" << endl;
    cout << "\t\t Q: The cin object is used to take input from the user. " << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t ANSWER [T/F]: ";
    cin >> ioanswer3;
    if (ioanswer3 == 'T' || ioanswer3 == 't')
    {
        cout << "\n\t\t CORRECT... +5 POINTS!!!" << endl;
        points+=5;
        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
    } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);
 //4
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : EASY                                 POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t Code Completion                                 \n"       << endl;
    cout << "\t\t Q: What will the following code output?                " << endl;
    cout << "\n";
    cout << "\t\t cout << " << '"' << "Hello " << '"' << ";" << endl;
    cout << "\t\t cout << " << '"' << "C++!"    << '"' << ";" << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t ANSWER: ";
    cin.ignore(); 
    getline(cin,ioanswer4);
    if (ioanswer4 == "Hello C++!")
    {
        cout << "\n\t\t CORRECT... +5 POINTS!!!" << endl;
        points+=5;
        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
    } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);
 //5
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : MEDIUM                               POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t Multiple Choice                                      \n" << endl;
    cout << "\t\t Q: Which statement correctly reads an integer "          << endl;
    cout << "\t\t    input into a variable x?                   "          << endl;
    cout << "\t\t a) cout >> x;"      << endl;
    cout << "\t\t b) cin << x;"       << endl;
    cout << "\t\t c) cin >> x;"       << endl;
    cout << "\t\t d) input(x);"       << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t ANSWER: ";
    cin >> ioanswer5;
    if (ioanswer5 == 'c' || ioanswer5 == 'C')
    {
        cout << "\n\t\t CORRECT... +10 POINTS!!!" << endl;
        points+=10;
        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
    } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);
 //6
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : MEDIUM                               POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t True or False                                        \n" << endl;
    cout << "\t\t Q: getline(cin, variable) is used to read              " << endl;
    cout << "\t\t    a single word of input. "                             << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t ANSWER [T/F]: ";
    cin >> ioanswer6;
    if (ioanswer6 == 'F' || ioanswer6 == 'f')
    {
        cout << "\n\t\t CORRECT... +10 POINTS!!!" << endl;
        points+=10;
        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
    } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);
 //7
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : MEDIUM                               POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t Code Output                                    \n"       << endl;
    cout << "\t\t Q: What will the following code output if the user     " << endl;
    cout << "\t\t    inputs 25? "                                          << endl;
    cout << "\n";
    cout << "\t\t int x; "       << endl;
    cout << "\t\t cin >> x; "    << endl;
    cout << "\t\t cout << "<<'"'<< "You entered: "<< '"' << "<< "<<"x; " << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t ANSWER: ";
    cin.ignore(); 
    getline(cin,ioanswer7);
    if (ioanswer7 == "You entered: 25")
    {
        cout << "\n\t\t CORRECT... +10 POINTS!!!" << endl;
        points+=10;
        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
    } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);
 //8
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : HARD                                 POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t Code Output                                    \n"       << endl;
    cout << "\t\t Q: Complete the following code to read a string        " << endl;
    cout << "\t\t    with spaces and display it:  "                        << endl;
    cout << "\n";
    cout << "\t\t string sentence; "       << endl;
    cout << "\t\t _____;"    << endl;
    cout << "\t\t cout << "<<'"'<<"You entered:" <<'"'<<" <<"<<" sentence ""<< "<<"endl; "<< endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t ANSWER: ";
    cin.ignore(); 
    getline(cin,ioanswer8);
    if (ioanswer8 == "getline(cin, sentence)")
    {
        cout << "\n\t\t CORRECT... +15 POINTS!!!" << endl;
        points+=15;
        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
    } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);
 //9
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : HARD                                 POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t Output Prediction                                    \n" << endl;
    cout << "\t\t Q: What is the output of the following code if the     " << endl;
    cout << "\t\t    user inputs 10?  "                                    << endl;
    cout << "\n";
    cout << "\t\t int num; "       << endl;
    cout << "\t\t cin >> num;"     << endl;
    cout << "\t\t cout << "<<'"'<<"Double number is: " <<'"'<<" <<"<<" num*2 ""<< "<<"endl; "<< endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t ANSWER: ";
    cin.ignore(); 
    getline(cin,ioanswer9);
    if (ioanswer9 == "Double number is: 20")
    {
        cout << "\n\t\t CORRECT... +15 POINTS!!!" << endl;
        points+=15;
        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
    } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);
 //10
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : HARD                                 POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t Debugging                                             \n" << endl;
    cout << "\t\t Q: What is the issue with the following code?           " << endl;
    cout << "\n";
    cout << "\t\t1 int num; "                                               << endl;
    cout << "\t\t2 cout << "<<'"'<<"Enter a number: "<<'"'<<";"  << endl;
    cout << "\t\t3 getline(cin, num); "                                     << endl;
    cout << "\t\t4 cout << "<<'"'<<"You entered: " <<'"'<<"<<"<<" num"<<"; "<< endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t LINE WITH ISSUE [1-4]: ";
    cin >> line;
  
    if (line=="3")
    {
    do{cout << "\t\t TYPE THE CORRECT ANSWER: ";
        cin.ignore(); 
        getline(cin,ioanswer10);
        if (ioanswer10 == "cin >> num;")
        {
            cout << "\n\t\t CORRECT... +20 POINTS!!!" << endl;
            points+=20;
            while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
        }
        else
        {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') 
        {
            points -= 5;
            system("cls");
            break; 
        } 
        else if (skip != 'n' && skip != 'N') 
        {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
    } while (true);
	}
 }while(line!="3");
 
}
void datatypes(char& enter)
{
    do{
    system("cls");
    cout << "\t\t========================================================" << endl;
    cout << "\t\t            GREAT! YOU CHOOSE THE SECOND TOPIC"           << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\t\t                        DATA TYPES                      " << endl;
    cout << "\n";
    cout << "\t\t              Unlock the world of Data Types            " << endl;
    cout << "\t\t the core of organizing and powering your C++ programs! " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n\n";
    cout << "\t\tPress 'L'  to Start Learning... : ";
    enter=_getch();
    }while(enter!='L' && enter != 'l');
}
void dtQuestions(string appendname, int& points, char& next, char dtanswer1, string dtanswer2, char dtanswer3, string dtanswer4, string dtanswer5, string line, char skip)
//1
{
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : EASY                                 POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t Multiple Choice                                   \n" << endl;
    cout << "\t\t Q: Which of the following is a floating-point data     " << endl;
    cout << "\t\t    type in C++?                                        " << endl;
    cout << "\t\t a) int"        << endl;
    cout << "\t\t b) char"       << endl;
    cout << "\t\t c) float"      << endl;
    cout << "\t\t d) bool"       << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t ANSWER: ";
    cin >> dtanswer1;
    if (dtanswer1 == 'c' || dtanswer1 == 'C')
    {
        cout << "\n\t\t CORRECT... +5 POINTS!!!" << endl;
        points+=5;
        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
    } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);
 //2
 
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : EASY                                 POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t Fill in the Blank                                 \n" << endl;
    cout << "\t\t Q: What is the data type used to store a single        " << endl;
    cout << "\t\t    character in C++?" << endl;
    cout << "\n";
    cout << "\t\t  ANSWER: ________"  << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t ANSWER: ";
    cin.ignore(); 
    getline(cin,dtanswer2);
    if (dtanswer2 == "char")
    {
        cout << "\n\t\t CORRECT... +5 POINTS!!!" << endl;
        points+=5;
        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
    } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);
 //3
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : MEDIUM                               POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t True or False                                        \n" << endl;
    cout << "\t\t Q: The bool data type can store more than two values.  " << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t ANSWER [T/F]: ";
    cin >> dtanswer3;
    if (dtanswer3 == 'F' || dtanswer3 == 'f')
    {
        cout << "\n\t\t CORRECT... +10 POINTS!!!" << endl;
        points+=10;
        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
    } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);
 //4
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : MEDIUM                               POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t Output Prediction                                    \n" << endl;
    cout << "\t\t Q: What will be the output of the following code?      " << endl;
    cout << "\n";
    cout << "\t\t int a=10; "       << endl;
    cout << "\t\t float b=3.5; "       << endl;
    cout << "\t\t cout << a + b;"     << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t ANSWER: ";
    cin.ignore(); 
    getline(cin, dtanswer4);
    if (dtanswer4 == "13.5")
    {
        cout << "\n\t\t CORRECT... +15 POINTS!!!" << endl;
        points+=15;
        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
    } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);
 //5
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : HARD                                 POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t Debugging                                             \n" << endl;
    cout << "\t\t Q: The following code has an issue.Identify and fix it. " << endl;
    cout << "\n";
    cout << "\t\t1   int x = 3.14; "                                       << endl;
    cout << "\t\t2   cout << "<<'x'<<";"                                   << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t LINE WITH ISSUE [1 or 2]: ";
    cin >> line;
  
    if (line=="1")
    {
    do{cout << "\t\t TYPE THE CORRECT ANSWER (DATA TYPE): ";
        cin.ignore(); 
        getline(cin, dtanswer5);
        if (dtanswer5 == "float")
        {
            cout << "\n\t\t CORRECT... +20 POINTS!!!" << endl;
            points+=20;
            while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
        } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
    } while (true);
    }  
 }while(line!="1");
 
}
void operators(char& enter)
{
    do{
    system("cls");
    cout << "\t\t========================================================" << endl;
    cout << "\t\t             GREAT! YOU CHOOSE THE THIRD TOPIC"           << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\t\t                         OPERATORS                      " << endl;
    cout << "\n";
    cout << "\t\t             Step into the realm of Operators           " << endl;
    cout << "\t\t            the tools that drive calculations,          " << endl;
    cout << "\t\t              comparisons, and logic in C++.            " << endl;
    cout << "\t\t            Master them to command the flow of          " << endl;
    cout << "\t\t                       your programs!                   " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n\n";
    cout << "\t\tPress 'L'  to Start Learning... : ";
    enter=_getch();
    }while(enter!='L' && enter != 'l');
}
void opQuestions(string appendname, int& points, char& next, char opanswer1, string opanswer2, string opanswer3, char opanswer4, char opanswer5, char skip)
{
//1
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : EASY                                 POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t Multiple Choice                                      \n" << endl;
    cout << "\t\t Q: What is the output of the following code?           " << endl;
    cout << "\n";
    cout << "\t\t int x = 5, y = 10"        << endl;
    cout << "\t\t cout <<" << " x + y;"     << endl;
    cout << "\n";
    cout << "\t\t a) 10"       << endl;
    cout << "\t\t b) 15"       << endl;
    cout << "\t\t c) 20"       << endl;
    cout << "\t\t c) 25"       << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t ANSWER: ";
    cin >> opanswer1;
    if (opanswer1 == 'b' || opanswer1 == 'B')
    {
        cout << "\n\t\t CORRECT... +5 POINTS!!!" << endl;
        points+=5;
        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
    } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);
 
 //2
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : EASY                                 POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t Fill in the Blank                                 \n" << endl;
    cout << "\t\t Q: Complete the code to multiply two numbers:       " << endl;
    cout << "\n";
    cout << "\t\t    int x=3, y=4;" << endl;
    cout << "\t\t    cout <<" << "x _ y;"  << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t ANSWER: ";
    cin.ignore(); 
    cin >> opanswer2;
    if (opanswer2 == "*")
    {
        cout << "\n\t\t CORRECT... +5 POINTS!!!" << endl;
        points+=5;
        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
    } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);
 //3
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : MEDIUM                               POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t Code Output                                    \n"       << endl;
    cout << "\t\t Q: What will the following code output?                " << endl;
    cout << "\n";
    cout << "\t\t int x = 10, y = 20;"       << endl;
    cout << "\t\t cout << "<<'"'<< "Result: "<< '"' << "<< "<<"x % y; " << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t ANSWER: ";
    cin.ignore(); 
    getline(cin,opanswer3);
    if (opanswer3 == "Result: 10")
    {
        cout << "\n\t\t CORRECT... +10 POINTS!!!" << endl;
        points+=10;
        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
    } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);
 //4
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : MEDIUM                               POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t True or False                                        \n" << endl;
    cout << "\t\t Q: The following code will output zero (0)             " << endl;
    cout << "\n";
    cout << "\t\t    int x = 5, y = 2; " << endl;
    cout << "\t\t    cout <<" << "x/y; " << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t ANSWER [T/F]: ";
    cin >> opanswer4;
    if (opanswer4 == 'F' || opanswer4 == 'f')
    {
        cout << "\n\t\t CORRECT... +10 POINTS!!!" << endl;
        points+=10;
        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
    } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 10;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);
 //5
    cout << "\t\t" << appendname << " CURRENT POINTS : " << points << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEVEL : HARD                                 POINTS: 5 " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t Multiple Choice                                      \n" << endl;
    cout << "\t\t Q: What will the value of x be after the               " << endl;
    cout << "\t\t    following code executes?                            " << endl;
    cout << "\n";
    cout << "\t\t int x = 5;"               << endl;
    cout << "\t\t x += (x * 2) - (x / 5); " << endl;
    cout << "\n";
    cout << "\t\t a) 15"       << endl;
    cout << "\t\t b) 14"       << endl;
    cout << "\t\t c) 13"       << endl;
    cout << "\t\t c) 16"       << endl;
    cout << "\n";
    cout << "\t\t========================================================" << endl;
 do{cout << "\t\t ANSWER: ";
    cin >> opanswer5;
    if (opanswer5 == 'b' || opanswer5 == 'B')
    {
        cout << "\n\t\t CORRECT... +5 POINTS!!!" << endl;
        points+=20;
        while (true) {
            cout << "\n\t\t NEXT ['N']: ";
            cin >> next;

            if (next == 'N' || next == 'n') {
                system("cls");
                break; 
            } else {
                cout << "\t\t INVALID INPUT! Please press 'N' to continue.\n";
            }
        }
        break;
    } else {
        cout << "\t\t WRONG!...TRY AGAIN" << endl;
        cout << "\t\t DO YOU WANT TO SKIP THIS QUESTION? [Y/N]: ";
        cin >> skip;

        if (skip == 'y' || skip == 'Y') {
            points -= 5;
            system("cls");
            break; 
        } else if (skip != 'n' && skip != 'N') {
            cout << "\t\t INVALID INPUT! Please enter 'Y' or 'N'.\n";
        }
    }
} while (true);

}
 void final(string& username, int points, char& again)
 {
 	system("cls");
    cout << "\t\t========================================================" << endl;
    cout << "\t\t                   CONGRATULATIONS!!!                    "<< endl;
    cout << "\t\t========================================================" << endl;
    cout << "\n";
    cout << "\t\t                   " << username 							   << endl;
    cout << "\n";
    cout << "\t\t                   TOTAL POINTS "<< points               << endl;
    cout << "\n";
    cout << "\t\t    You've  mastered this topic and earned valuable     " << endl;
    cout << "\t\t        knowledge. Keep going, your C++ adventure       " << endl;
    cout << "\t\t                        awaits!                         " << endl;
    cout << "\t\t========================================================" << endl;
    cout << "\t\t LEARN ANOTHER TOPIC? [Y/N] :  ";
    cin >> again;
 }
