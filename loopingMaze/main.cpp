#include <iostream>
#include <string>
#include <stdio.h>
#include <thread>
using namespace std;
void box1();
void box2();
void box3();
void box4();
void box5();
void box6();
void box7();
void box8();
void box9();
void box10();
void box11();
void box12();
int main(int argc, const char * argv[]) {
    box1();
}
void box1(){
    int choice;
    bool quit = false;
    cout << "Would you like to go right(1) or down(2)\n";
    while (!quit) {
        cin >> choice;
        switch (choice) {
            case 1:
                box2();
                break;
            case 2:
                box4();
                break;
            default:
                cout << "plz enter correc ting\n";
                break;
        }
    }
}
void box2() {
    int choice;
    bool quit = false;
    cout << "Would you like to go right(1), left(2), or down(3)\n";
    while (!quit) {
        cin >> choice;
        switch (choice) {
            case 1:
                box3();
                break;
            case 2:
                box1();
                break;
            case 3:
                box5();
                break;
            default:
                cout << "plz enter correc ting\n";
                break;
        }
    }
}
void box3() {
    cout << "Dead End, You have to go left\n";
    box2();
}
void box4() {
    int choice;
    bool quit = false;
    cout << "Would you like to go up(1), down(2), or right(3)\n";
    while (!quit) {
        cin >> choice;
        switch (choice) {
            case 1:
                box1();
                break;
            case 2:
                box7();
                break;
            case 3:
                box5();
                break;
            default:
                cout << "plz enter correc ting\n";
                break;
        }
    }
}
void box5() {
    int choice;
    bool quit = false;
    cout << "Would you like to go right(1), left(2), up(3), or down(4)\n";
    while (!quit) {
        cin >> choice;
        switch (choice) {
            case 1:
                box6();
                break;
            case 2:
                box4();
                break;
            case 3:
                box2();
                break;
            case 4:
                box9();
            default:
                cout << "plz enter correc ting\n";
                break;
        }
    }
}
void box6() {
    int choice;
    bool quit = false;
    cout << "Would you like to go left(1) or down(2)\n";
    while (!quit) {
        cin >> choice;
        switch (choice) {
            case 1:
                box5();
                break;
            case 2:
                box9();
                break;
            default:
                cout << "plz enter correc ting\n";
                break;
        }
    }
}
void box7() {
    int choice;
    bool quit = false;
    cout << "Would you like to go right(1), down(2) or up(3)\n";
    while (!quit) {
        cin >> choice;
        switch (choice) {
            case 1:
                box8();
                break;
            case 2:
                box10();
                break;
            case 3:
                box4();
                break;
            default:
                cout << "plz enter correc ting\n";
                break;
        }
    }
}
void box8() {
    int choice;
    bool quit = false;
    cout << "Would you like to go right(1) or left(2)\n";
    while (!quit) {
        cin >> choice;
        switch (choice) {
            case 1:
                box9();
                break;
            case 2:
                box7();
                break;
            default:
                cout << "plz enter correc ting\n";
                break;
        }
    }
}
void box9() {
    int choice;
    bool quit = false;
    cout << "Would you like to go up(1), down(2) or left(3)\n";
    while (!quit) {
        cin >> choice;
        switch (choice) {
            case 1:
                box6();
                break;
            case 2:
                box12();
                break;
            case 3:
                box8();
                break;
            default:
                cout << "plz enter correc ting\n";
                break;
        }
    }
}
void box10() {
    int choice;
    bool quit = false;
    cout << "Would you like to go up(1), or right(2)\n";
    while (!quit) {
        cin >> choice;
        switch (choice) {
            case 1:
                box7();
                break;
            case 2:
                box11();
                break;
            default:
                cout << "plz enter correc ting\n";
                break;
        }
    }
}
void box11() {
    cout << "Congrats, you have made it to the end!\nAsk Mr. Miyoshi for a cookie.\n:()\n:(\n:)\n";
        exit(0);
}
void box12() {
    cout << "Dead End, you have to go up\n";
    box9();
}

//edit: 5, 6, 7, 9
