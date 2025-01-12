#include <bits/stdc++.h>
using namespace std;

struct LIST
{
    public:
    int arr[100];
    int size;

    LIST()
    {
        size=0;
    }

    void insert(int value, int position) 
    {
        if (size >= 100) 
        {
            cout << "List is full. Cannot insert " << value << ".\n";
               return;
        }
        if (position < 0 || position > size) { // Validate position
            cout << "Invalid position " << position << ".\n";
            return;
        }
        for (int i = size; i > position; --i) {
            arr[i] = arr[i - 1];
        }
        arr[position] = value;
        size++;
        return;
    }

    void remove(int value)
    {
        bool found=false;
        for(int i=0;i<size;i++)
        {
            if(arr[i]==value)
            {
                found=true;
                for(int j=i;j<size-1;j++)
                {
                    arr[j]=arr[j+1];
                }
                size--;
                break;
            }
        }
        if(!found)
        {
           cout<<"Value not found/n";
           return;
        }
    }

  void first() {
    if (size > 0) {
        cout << arr[0] << endl;
    } else {
        cout << "List is empty.\n";
    }
}

   void print(){
        if (size == 0) {
            cout << "List is empty.\n";
        } else {
            cout << "List elements: ";
            for (int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << "\n";
        }
    }

    void find(int value)
    {
        bool found=false;
        int index;
        for(int i=0;i<size;i++)
        {
            if(arr[i]==value)
                {
                    found=true;
                    index=i;
                    break;
                }
        }
        if(found)
        {
            cout<<value<<" Found at index "<<index<<endl;
        }
        else{
            cout<<value<<" not found"<<endl;
        }
    }
    int RETRIEVE(int p)
    {
        if(p>=size || p<0)
        {
            cout<<"INVALID POSITON"<<endl;
            return -1;
        }
        else{
            return arr[p];
        }
    }

    int NEXT(int x)
    {
        int index=-1;
        for(int i = 0; i < size; i++)
        {
            if(arr[i] == x)
            {
                index = i;
                break;
            }
        }
        
        if(index != -1 && index < size - 1) 
        {
            return arr[index + 1];
        }
        else
        {
            cout << "Next element not found (either x is not in the list or it is the last element).\n";
            return -1;  
        }
    }
};



int main()
{
     LIST myList;
    myList.insert(10, 0);
    myList.insert(20, 1);
    myList.insert(30, 2);
    myList.insert(40, 3);
    myList.insert(50, 4);

    myList.print();

    myList.insert(60, 5);
    myList.print();

    myList.find(20);
    myList.NEXT(20);
    myList.print();
    myList.remove(20);
    myList.print();


    myList.first();

    cout << "Element at position 2: " << myList.RETRIEVE(2) << endl;
    
}