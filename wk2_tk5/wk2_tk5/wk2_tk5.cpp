#include <iostream>
using namespace std;

int main()
{
    //initializing the variables
    int students = 14, packets = 40;
    //how many packets each student gets equally split
    int packetsForStudents = 40 / 14;
    //leftover packets aka the remainder after deviding 40
    int leftoverPackets = 40 % 14;

    //printing out the answers
    cout << "Each student gets " << packetsForStudents << "packets!" << endl;
    cout << "You get " << leftoverPackets << "packets!" << endl;
}
