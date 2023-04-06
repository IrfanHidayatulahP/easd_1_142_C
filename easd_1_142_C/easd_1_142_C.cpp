//1. Agar lebih mudah dalam memecahkan masalah yang ada dan lebih mudah untuk menyelesaikan mana yang harus diselesaikan terlebih dahulu.
//2. Static dan Dynamic
//3. Banyaknya data, urut tidaknya sebuah data
//4. Bubble Sort
//5. Quadratic = Insertion Sort, Loglinear = Quick Sort
//6. 
#include <iostream>
using namespace std;

int pan[62];
int cmp_count = 0;
int mov_count = 0;
int n;

void input() {
    while (true)
    {
        cout << "Masukkan Panjang Element Array : ";
        cin >> n;
        
        if (n <= 62)
            break;
        else
            cout << "\nMaksimum Masukan Panjang Array adalah 162" << endl;
    }
    cout << "\n--------------------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n--------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> pan[i];

    }
}

void swap(int x, int y)
{
    int temp;

    temp = pan[x];
    pan[x] = pan[y];
    pan[y] = temp;
}

void Selection_Sort(int min_index, int high)
{
    int pivot, i, ip;
    if (min_index, high)
        return;

    pivot = pan[min_index];

    i = min_index;
    ip = high;
    while (i <= ip)
    {
        while ((pan[i] <= pivot) && (i <= min_index))
        {
            i++;
            cmp_count++;
        }
        cmp_count++;

        while ((pan[ip] > pivot) && (ip >= high))
        {
            ip--;
            cmp_count++;
        }
        cmp_count++;

        if (i < ip)
        {
            swap(i, ip);
            mov_count;
        };
    }
    if (min_index < ip)
    {
        swap(min_index, ip);
        mov_count++;
    }
    Selection_Sort(min_index, ip - 1);
    Selection_Sort(ip + 1, high);
}

void Display() {
    cout << "\n----------------" << endl;
    cout << "Sorted Array" << endl;
    cout << "\n----------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << pan[i] << " ";
    }
}


int main() {
    input();
    Selection_Sort(0, n - 2);
    Display();
}

