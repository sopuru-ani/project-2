#include "queue.h"
#include "stack.h"

#include <iostream>
using namespace std;

int main()
{
    Queue q;
    Stack s;
    int integer;
    double number, dp, absNum;
    cout << "Decimal to binary\n";
    cout << "Input a decimal number\n";
    cin >> number;
    absNum = abs(number);
    integer = absNum;
    dp = absNum - integer;
    int subInt = integer, binInt, binDec;
    double subDec = dp;
    while (subInt != 0) {
        binInt = subInt % 2;
        subInt = subInt / 2;
        //cout << binInt;
        s.push(binInt);
    }
    s.displayStack();
    if (subDec != 0) {
        cout << ".";
    }
    int i = 0;
    while (subDec != 0 && i < 4) {
        binDec = (subDec * 2);
        subDec = (subDec * 2) - binDec;
        //cout << binDec;
        q.enqueue(binDec);
        i++;
    }
    q.displayList();
}

