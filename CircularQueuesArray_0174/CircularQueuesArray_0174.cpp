#include <iostream>
using namespace std;

//membuat class queues
class Queues {
    //deklarasi variabel front, rear, dan max, dengan nilai max = 5
    int FRONT, REAR, max = 5;
    int queue_array[5]; //membuat array untuk menampung queues

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


        //cek apakah antrian penuh
        if ((FRONT == 0 && REAR == max) || (FRONT == REAR + 1))
        {
            cout << "\nQueue overflow\n";
            return;
        }

        //cek apakah antrian kosong
        if (FRONT == -1)
        {
            FRONT = 0;
            REAR = 0;
        }
        else
        {
            //jika REAR berada di posisi terakhir array, kembali ke awal array
            if (REAR = max - 1)
            {
                REAR = 0;
            }
            else
            {
                REAR = REAR + 1;
            }
        }
        //memasukkan nilai ke array index ke REAR
        queue_array[REAR] = num;
    }

    //membuat prosedur remove untuk menghapus element dari queues
    void remove() {

        //cek apakah antrian kosong
        if (FRONT == -1)
        {
            cout << "Queue underflow\n";
            return;
        }
        //display untuk menampilkan element yang di delete dari queue
        cout << "\nThe element delete from queue is : " << queue_array[FRONT] << "\n";

        //cek jika antrian hanya memiliki satu element
        if (FRONT == REAR)
        {
            FRONT = -1;
            REAR = -1;
        }
        else
        {
            //jika posisi element yang di hapus berada di posisi terakhir array, kembali ke awal array
            if (FRONT == max - 1)
            {
                FRONT = 0;
            }
            else //jika tidak increment FRONT + 1
            {
                FRONT = FRONT + 1;
            }
        }
    }

        //membuat prosedur diplay untuk menampilkan element queue
        void display() {
            //cek apakah antrian kosong 
            if (FRONT == -1)
            {
                cout << "Queue is Empty\n";
                return;
            }

            cout << "\nElement in queue are...\n";

            //jika FRONT <= REAR, Iterasi dari FRONT hingga REAR
            if (FRONT <= REAR)
            {
                while (FRONT <= max - 1)
                {
                    cout << queue_array[FRONT] << " ";
                    FRONT++;
                }
                cout << endl;
            }
            
        }

    

};

int main()
{
    
}
