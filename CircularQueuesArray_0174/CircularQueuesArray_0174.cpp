#include <iostream>
using namespace std;

//membuat class queues
class Queues {
    //deklarasi variabel front, rear, dan max, dengan nilai max = 5
    int FRONT, REAR, max = 5;

public :
    //set value front dan rear = -1
    Queues() {
        FRONT = -1;
        REAR = -1;
    }

    //pembuatan prosedur insert untuk memasukkan nilai ke dalam queues
    void insert() {
        int num;
        cout << "Enter a Number : ";
        cin >> num;
        cout << endl;
    }


    //cek apakah antrian penuh
    if ((FRONT == 0 && REAR == max) || (FRONT == REAR + 1))
    {
        cout << "\nQueue overflow\n";
        return;
    }

};

int main()
{
    
}
