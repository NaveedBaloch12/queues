#include <iostream>
using namespace std;

#define MAX 15

class Queue
{
    int Front, Rear;
    int Arr[MAX];

public:
    Queue()
    {
        Front = -1;
        Rear = -1;
    }
    void Insert(int Num)
    {
        if (Rear >= MAX - 1)
            cout << "ERROR: Queue is full!" << endl;
        else
        {
            Rear++;
            Arr[Rear] = Num;
            if (Front == -1)
            {
                Front = 0;
            }
        }
    }
    int Delete()
    {
        if (Front > Rear)
            cout << "ERROR: Queue is Empty!" << endl;
        else
        {
            int Num = Arr[Front];
            Front++;
            return Num;
        }
        return 0;
    }

    bool IsEmpty()
    {
        if (Front > Rear)
            return true;
        else
            return false;
    }
    bool IsFull()
    {
        if(Front >= MAX)
            return true;
        else
        return false; 
    }
};
// User defined functions...

int main() // Main function
{
    Queue Q;
    int Num, Ele;
    cout<<"How many Elements to enter in the queue: ( <= "<< MAX << ")";
    cin >> Num;
    if(Num > MAX)
    {
        cout<<"ERROR! Too many elements...";
        return 0;
    }
    for (int i = 0; i < Num; i++)
    {
        cin >> Ele;
        Q.Insert(Ele);
    }
    cout<< endl;

    cout << "Queue: ";
    while (!Q.IsEmpty())
    {
        cout << Q.Delete() << " ";
    }
    
    return 0;
}