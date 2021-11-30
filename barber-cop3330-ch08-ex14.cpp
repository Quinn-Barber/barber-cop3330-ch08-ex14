#include <bits/stdc++.h>
#include <iostream>

using namespace std;

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Quinn Barber
 */

 int testingFunction(const int a, const int b)
 {
     int c = a * b; //Modifiable (a and b are not)
     c *= a;
     c += b;
     return c;
 }

int main(void)
{
    int *Ptra, *Ptrb;
    int a, b;
    cin >> a >> b;
    Ptra = &a;
    Ptrb = &b;
    cout << testingFunction(*Ptra, *Ptrb) << "\n";
    cout << a << " " << b;
    //Although a pointer is passed to the testingFunction, whether it returns anything or not, the pointer value cannot be modified, and therefore it cannot change.
}
