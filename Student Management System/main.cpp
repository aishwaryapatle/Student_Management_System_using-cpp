#include <iostream>
#include<windows.h>

using namespace std;

class Student
{
    //private data memebers
    int roll, mat, eng, sci;
    float result;
    string name;

public:

    //getters and setters
    void setRoll()
    {
        cin>>roll;
    }

    void setMat()
    {
        cin>>mat;
    }

    void setEng()
    {
        cin>>eng;
    }

    void setSci()
    {
        cin>>sci;
    }

    void setName()
    {
        cin>>name;
    }

    void setRollno(int i)
    {
        roll=i;
    }

    void setName1(string i)
    {
        name=i;
    }

    void setMat1(int i)
    {
        mat=i;
    }

    void setSci1(int i)
    {
        sci=i;
    }

    void setEng1(int i)
    {
        eng=i;
    }

    void setResult1(float i)
    {
        result=i;
    }

    int getRoll()
    {
        return roll;
    }

    int getMat()
    {
        return mat;
    }

    int getSci()
    {
        return sci;
    }

    int getEng()
    {
        return eng;
    }

    string getName()
    {
        return name;
    }

    float getResult()
    {
        int a = (getMat()+getEng()+getSci());
        return a/3;
    }



    //add function too set the data
	void add()
	{
        cout << "Enter Student Name   : ";
        setName();
        cout << "Enter Maths Marks    : ";
        setMat();
        cout << "Enter Science Marks  : ";
        setSci();
        cout << "Enter English Marks  : ";
        setEng();
    }


    //show function to display all the saved data
	void show()
	{
        cout<<"\t"<<getRoll()<<"\t     "<<getName()<<"\t\t    "<<getMat()<<"\t    "<<getSci()<<"\t\t"<<getEng()<<"\t    "<<getResult()<<endl;
        cout<<"\n";
    }


    void showTemplate()
    {
        cout << "\n\n\n+-------------------------------+";
        cout << "\n| \t2. SHOW STUDENT\t\t|";
        cout << "\n+-------------------------------+"<<endl<<endl;
        cout << "+-----------+---------------------------+-------+---------+---------+------------+";
        cout << "\nRoll Number |\t\tName\t\t| Maths | Science | English | Percentage |"<<endl;
        cout << "+-----------+---------------------------+-------+---------+---------+------------+\n";

    }


    void search1()
    {
        cout<<"\n+-------------------------+";
        cout<<"\n|    NAME        : "<<getName()<<"\t|"<<endl;
        cout<<"|    ROLL NUMBER : "<<getRoll()<<"\t  |"<<endl;
        cout<<"|   ----- MARKS -----"<<"\t  |"<<endl;
        cout<<"|                    "<<"\t  |"<<endl;
        cout<<"|    MATHS      : "<<getMat()<<"\t  |"<<endl;
        cout<<"|    SCIENCE    : "<<getSci()<<"\t  |"<<endl;
        cout<<"|    ENGLISH    : "<<getEng()<<"\t  |"<<endl;
        cout<<"+-------------------------+"<<endl;
        cout<<"|    PERCENTAGE : "<<getResult()<<" %"<<"    |"<<endl;
        cout<<"+-------------------------+\n";
    }


    int searchTemplate()
    {
        int searchRoll;
        cout<<"\n\n+-------------------------------+";
        cout<<"\n| \t3. SEARCH STUDENT\t|";
        cout<<"\n+-------------------------------+";
        cout<<"\n\nEnter Roll Number : ";
        cin>>searchRoll;

        return searchRoll;
    }


    void updateTemplate()
    {
        cout<<"\n\n\n+-------------------------------+";
        cout<<"\n| \t4. UPDATE STUDENT\t|";
        cout<<"\n+-------------------------------+\n";
    }

    void specificDelete(Student s1[], int i)
    {
        s1[i].setName1(s1[i+1].getName());
        s1[i].setRollno(s1[i+1].getRoll());
        s1[i].setMat1(s1[i+1].getMat());
        s1[i].setSci1(s1[i+1].getSci());
        s1[i].setEng1(s1[i+1].getEng());
        s1[i].setResult1(s1[i+1].getResult());
    }

    void update(Student s1[], int i)
    {
        int choice, choice1, newMathsMarks, newEnglishMarks, newScienceMarks;
        string newName = "";

        cout<<"\nWhat do you want to udpate ? \n";
        cout<<"\n[1]. NAME";
        cout<<"\n\n ~~~ M A R K S ~~~";
        cout<<"\n\n[2]. MATHS";
        cout<<"\n\n[3]. SCIENCE";
        cout<<"\n\n[4]. ENGLISH";
        cout<<"\n\n[0]. BACK TO MAIN MENU";
        cout<<"\n\n--------------------------------";
        cout<<"\nEnter your choice = ";
        cin>>choice;

        switch(choice)
        {
            //updating name
            case 1:
                {
                    cout<<"\n\nCurrent Name is : "<<s1[i].getName();
                    cout<<"\nEnter New Name  : ";
                    cin>>newName;
                    cout<<"\nDo you really want to change ?";
                    cout<<"\n[1]. YES\n[2]. NO\n";
                    cout<<"\n--------------------------------";
                    cout<<"\nEnter your choice = ";
                    cin>>choice1;

                    switch(choice1)
                    {
                        case 1:
                            s1[i].setName1(newName);
                            cout<<"\nName is updated..\n";
                            break;

                        case 2:
                            break;

                        default:
                            cout<<"\nSORRY! Wrong input\n";
                            break;
                    }
                    break;
                }


            //Updating Maths Marks
            case 2:
                {
                    cout<<"\n\nCurrent Maths Marks is  : "<<s1[i].getMat();
                    cout<<"\nEnter New English Marks : ";
                    cin>>newMathsMarks;
                    cout<<"\nDo you really want to change ?";
                    cout<<"\n[1]. YES\n[2]. NO\n";
                    cout<<"\n--------------------------------";
                    cout<<"\nEnter your choice = ";
                    cin>>choice1;

                    switch(choice1)
                    {
                        case 1:
                            s1[i].setMat1(newMathsMarks);
                            cout<<"\nMaths marks is now updated.."<<endl;
                            s1[i].setResult1(s1[i].getMat()+s1[i].getEng()+s1[i].getSci()/3);
                            break;

                        case 2:
                            break;

                        default:
                            printf("\nSORRY! Wrong input\n");
                            break;
                    }
                    break;
                }


            //Updating Science Marks
            case 3:
            {
                cout<<"\n\nCurrent Science Marks is : "<<s1[i].getSci();
                cout<<"\nEnter New Science Marks  : ";
                cin>>newScienceMarks;
                cout<<"\nDo you really want to change ?";
                cout<<"\n[1]. YES\n[2]. NO\n";
                cout<<"\n--------------------------------";
                cout<<"\nEnter your choice = ";
                cin>>choice1;
                switch(choice1)
                {
                    case 1:
                        s1[i].setSci1(newScienceMarks);
                        cout<<"\nScience marks is now updated.."<<endl;
                        s1[i].setResult1(s1[i].getMat()+s1[i].getEng()+s1[i].getSci()/3);
                        break;

                    case 2:
                        break;

                    default:
                        printf("\nSORRY! Wrong input\n");
                        break;
                }
                break;
            }


            //Updating English Marks
            case 4:
                {
                    cout<<"\n\nCurrent English Marks is : "<<s1[i].getEng();
                    cout<<"\nEnter New English Marks  : ";
                    cin>>newEnglishMarks;
                    cout<<"\nDo you really want to change ?";
                    cout<<"\n[1]. YES\n[2]. NO\n";
                    cout<<"\n--------------------------------";
                    cout<<"\nEnter your choice = ";
                    cin>>choice1;

                    switch(choice1)
                    {
                        case 1:
                            s1[i].setEng1(newEnglishMarks);
                            cout<<"\nEnglish marks is now updated.."<<endl;
                            s1[i].setResult1(s1[i].getMat()+s1[i].getEng()+s1[i].getSci()/3);
                            break;

                        case 2:
                            break;

                        default:
                                cout<<"\nSORRY! Wrong input"<<endl;
                            break;
                    }
                    break;
                }


            //case 0 to get out of switch case
            case 0:
                break;


            //default statement for switch case
            default:
                cout<<"\nWrong input!!"<<endl;
                break;
            }//switch case ends---!
    }


    int deleteTemplate()
    {
        cout<<"\n\n\n+-------------------------------+";
        cout<<"\n| \t5. DELETE STUDENT \t|";
        cout<<"\n+-------------------------------+\n";

        cout<<"\n[1]. Delete specific record"<<endl;
        cout<<"\n[2]. Delete full record"<<endl;
        cout<<"\n[0]. Back to main menu"<<endl;
        cout<<"\n--------------------------------";
        cout<<"\nEnter your choice = ";
        int deleteChoice;
        cin>>deleteChoice;

        return deleteChoice;
    }


    int menu()
    {
        int choice;
        cout<<"\n\n+-------------------------------+";
        cout<<"\n| \tA S T E R I S C \t|";
        cout<<"\n+-------------------------------+\n";
        cout<<"\n[1]. ADD STUDENT DETAILS"<<endl;
        cout<<"\n[2]. SHOW STUDENT DETAILS"<<endl;
        cout<<"\n[3]. SEARCH STUDENT DETAILS"<<endl;
        cout<<"\n[4]. UPDATE STUDENT DETAILS"<<endl;
        cout<<"\n[5]. DELETE STUDENT DETAILS"<<endl;
        cout<<"\n[0]. EXIT"<<endl;
        cout<<"\n--------------------------------";
        cout<<"\nEnter your choice = ";
        cin>>choice;
        return choice;
    }


    void loadingBar()
    {
        // 0 - black background,
        // A - Green Foreground
        system("color 0A");

        // Initialize char for printing
        // loading bar
        char a = 177, b = 219;


        cout << "\n\n\t\t\t\t^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
        cout << "\n\t\t\t\t::::: WELCOME TO STUDENT MANAGEMENT SYSTEM :::::";
        cout << "\n\t\t\t\t------------------------------------------------"<<endl<<endl;

        cout << "\n\t\t\t\t\tCREATED BY : AISHWARYA PATLE";

        printf("\n\n\n\n");
        printf("\n\n\n\n\t\t\t\t\tLoading...\n\n");
        printf("\t\t\t\t\t");

        // Print initial loading bar
        for (int i = 0; i < 26; i++)
            printf("%c", a);

        // Set the cursor again starting
        // point of loading bar
        printf("\r");
        printf("\t\t\t\t\t");

        // Print loading bar progress
        for (int i = 0; i < 26; i++) {
            printf("%c", b);

            // Sleep for 1 second
            Sleep(1000);
        }
        system("CLS");
    }
};


int main()
{
    int choice;
    Student s1[100];
    Student s;
    int y=1;
    int total=0;

    s.loadingBar();

    system("Color 5F");
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";
    cout << "\n|     WELCOME TO STUDENT MANAGEMENT SYSTEM     |";
    cout << "\n------------------------------------------------"<<endl<<endl;

    while(y)
    {
        //calling the menu named member function from the declared instance 's' of Student
        choice=s.menu();

        switch(choice)
        {

            //case 1 for adding student data
            case 1:
            {
                cout<<"\n\n+---------------------------------------+";
                cout<<"\n|\t1. ADD STUDENT DETAILS\t\t|";
                cout<<"\n+---------------------------------------+\n";

                int user = 0, k=0;
                cout << "\n\nEnter Number of Students : ";
                cin >> user;

                for(int i=total;i<total+user;i++)
                {
                    cout << "\n\nEnter Student Number " << i+1 << " Details"<<endl;
                    cout << "\nEnter Roll Number    : ";
                    L10:cin >> k;

                    for(int j=0; j<total+user; j++)
                    {
                        if(s1[j].getRoll()==k)
                        {
                            cout<<"Entered Roll Number already used"<<endl;
                            cout<<"Please Enter Different Roll Number : ";
                            goto L10;
                        }
                    }
                    s1[i].setRollno(k);
                    s1[i].add();
                }
                total+=user;
                cout << "\n";
                break;
            }


            //case 2 for showing student data
            case 2:
                {
                    if(total!=0)
                    {
                        //calling show menu to print the header of display details
                        s.showTemplate();

                        //loop for displaying all the data saved till now using the show function
                        for(int i=0;i<total;i++)
                        {
                            s1[i].show();
                        }
                    }
                    else
                    {
                        cout<<"\nNo data is entered"<<endl<<endl;
                    }
                    break;
                }


            //case 3 for searching student data
            case 3:
                {
                    if(total!=0)
                    {
                        int searchRoll = s.searchTemplate();
                        for(int i=0;i<total;i++)
                        {
                            if(s1[i].getRoll()==searchRoll)
                            {
                               s1[i].search1();
                               break;
                            }
                            if(i==total-1)
                            {
                                cout<<"\nNo such record found\n";
                                break;
                            }
                        }
                    }
                    else
                    {
                        cout<<"\nNo data is entered\n";
                    }
                    break;
                }



            case 4:
                {
                    bool found= false;
                    if(total!=0)
                    {
                        s.updateTemplate();
                        cout<<"\nEnter id of student which you want to update : ";
                        int updateRoll;
                        cin>>updateRoll;

                        for(int i=0;i<total;i++)
                        {
                            if(s1[i].getRoll()==updateRoll)
                            {
                                s.update(s1, i);
                                found=true;
                                break;
                            }
                        }
                        if(!found)
                        {
                            cout<<"Roll number not found"<<endl;
                        }
                    }
                    else
                    {
                        cout<<"No data is entered"<<endl;
                    }
                    break;
                }



            //case 5 for deletion of student data
            case 5:
                {
                    if(total!=0)
                    {
                        int deleteChoice = s.deleteTemplate();

                        switch(deleteChoice)
                        {
                            case 1:
                            {
                                int deleteRoll;
                                cout<<"\nEnter Roll number of student which you want to delete : ";
                                cin>>deleteRoll;

                                for(int i=0;i<total;i++)
                                    {
                                        if(s1[i].getRoll()==deleteRoll)
                                        {
                                            s.specificDelete(s1, i);
                                            total--;
                                            cout<<"\nYour mentioned record is deleted!\n";
                                            break;
                                        }
                                        if(i==total-1)
                                        {
                                            cout<<"\nNo such record found!\n";
                                        }
                                    }
                                }
                                break;

                        case 2:
                            {
                                total=0;
                                cout<<"\nAll record deleted!\n";
                            }
                            break;

                        case 0:
                            break;

                        default:
                            {
                                 cout<<"\nInvalid Input\n";
                            }
                            break;
                        }
                    }
                    else
                    {
                        cout<<"\nNo data is entered\n";
                    }
                    break;
                }


            //case 0 for ending the loop and closing the program
            case 0:
                {
                    y=0;
                    break;
                }

            //default case in case of invalid input provided by user
            default:
                {
                    cout<<"Invalid Input :(";
                    break;
                }
        }
    }
    return 0;
}


