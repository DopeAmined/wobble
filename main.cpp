//Problem Solving and Programming Group Assignment
#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
#include <limits>
#include <cstdlib>

using namespace std;

void start_menu(){

    string title="Welcome to xxx Rental Management System";
    int blank=(160-title.length())/2;
    
    cout<<setfill(' ')<<setw(blank)<<" ";
    cout<<title;
    cout<<setfill('_')<<setw(209)<<endl;
    //View in fullscreen window of console
    
}

void end_title(){

cout<<"\ntq n blablabla"<<endl;

}

int start_action() {
    int x;

    do {
        cout << "Enter the number for the corresponding action to take" << endl;
        cout << " [1] Venue Booking\n [2] xxxx\n [3] xxxxx\n :";
        cin >> x;

        if (!cin || x < 1 || x > 3) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again!" << endl;
        }
    } while (x < 1 || x > 3);

    return x;
}

bool repeat(){

    char yesno;
    cout<<"Do u want to quit program? Y/N\n:";
    do{
    cin>>yesno;
    yesno=toupper(yesno);
        if (yesno=='Y'){
            cout<<"Quitting the program"<<endl;
            return false;
        }
        else if(yesno=='N'){
            return true;
        }
        else{
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"Invalid Input,Please enter 'Y' or 'N' to continue"<<endl;
        }
    }while (true);
}
int main()
{

    bool again=true;

    while(again){

        system("cls");
        start_menu();
        int action=start_action();
        system("cls");

    switch (action){
        case 1:
            cout<<"choosed 1";
            //function 1
            break;
        case 2:
            cout<<"choosed 2";
            //function 2
            break;
        case 3:
            cout<<"choosed 3";
            //function 3;
            break;
    }
    cout<<"\n"<<endl;
    again=repeat();
}
    end_title();
    return 0;
}
