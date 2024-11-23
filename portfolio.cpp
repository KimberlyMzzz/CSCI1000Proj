#include <iostream>
using namespace std;

// Function to display the About Me section
void displayAboutMe() {
    cout << "-----------------------------------" << endl;
    cout << "          ABOUT ME                " << endl;
    cout << "-----------------------------------" << endl;
    cout << "Hi! My name is Kimberly Marquez, and I am a freshman majoring in Computer Science at CU Boulder." << endl;
    cout << "I am passionate about being a Latina in STEM because of the lack of representation in computer science." << endl;
    cout << "I value collaboration and am excited to meet new people and work together on exciting projects." << endl;
    cout << endl;
}

// Function to display the Skills section
void displaySkills() {
    cout << "-----------------------------------" << endl;
    cout << "          MY SKILLS               " << endl;
    cout << "-----------------------------------" << endl;
    cout << "1. Problem-Solving: I love tackling challenges and finding innovative solutions." << endl;
    cout << "2. Creativity: I'm skilled at coming up with fresh ideas and approaches." << endl;
    cout << "3. Programming Languages: Python, C++, HTML" << endl;
    cout << "4. Collaboration: I enjoy working with others to achieve shared goals." << endl;
    cout << endl;
}

// Function to display the Contact Info section
void displayContact() {
    cout << "-----------------------------------" << endl;
    cout << "          CONTACT ME              " << endl;
    cout << "-----------------------------------" << endl;
    cout << "Email: kima5010@colorado.edu" << endl;
    cout << "GitHub: https://github.com/KimberlyMzzz" << endl;
    cout << endl;
}

// Main function with menu
int main() {
    int choice;

    do {
        cout << "===================================" << endl;
        cout << "      PERSONAL PORTFOLIO MENU      " << endl;
        cout << "===================================" << endl;
        cout << "1. About Me" << endl;
        cout << "2. My Skills" << endl;
        cout << "3. Contact Info" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayAboutMe();
                break;
            case 2:
                displaySkills();
                break;
            case 3:
                displayContact();
                break;
            case 4:
                cout << "Thank you for visiting my portfolio!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
