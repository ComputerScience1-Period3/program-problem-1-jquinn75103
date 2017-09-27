/*
Jessica Quinn 9/21/17 3rd period
First Project
This is the first assignment that we are doing with coding, a beginner's guide to coding. 
8/
// Libraries
#include  <iostream> // gives access to cin, cout, end1, <<, >> boolalpha, noboolalpha
#include  <conio.h> // gives access to _kbhit() and _getch() for pause()
// Namespaces
using namespace std; //*
// Functions()
void pause() {
cout << "Press any key to continue...";
while (!_kbhit());
_getch();
cout << '\n';
}
// MAIN
boid main() {
// Define and Assign your variable(s)
// Display text
pause(); // pauses to see the displayed text
}