/*
    Lesson 3 is about variable instantiation. Since C++ is a static language,
    all variable types must be declared at initiation.

    The primative data types are:

    - Numeric:
        - short: integer, numeric type. 2 Bytes of memory and uncludes all whole numbers from -32,768 to 32,767
        - unsigned short: integer, numeric type. 2 Bytes of memory and includes all whole numbers from 0 to 65,535
        - int : integer, numeric type. 2 - 4 Bytes of memory and includes all whole numbers from -2,147,483,648 to 2,147,483,647
        - unsigned int: integer, non-negative numeric type. 4 Bytes of memory and includes all whole numbers from 0 to 4,294,967,295
        - long: integer, numeric type. 4 - 8 Bytes of memory
        - unsigned long: integer, non-negative numeric type. 4 - 8 Bytes of memory
        - long long int: integer, numeric type. 8 Bytes and includes all numbers from -(2^63) to 2^63 - 1
        - unsigned long long int: integer, numeric type. 8 Bytes and includes all numbers from 0 to 18,446,744,073,709,551,615
        - float: decimal, numeric type. Single precision floating-point values. 6 decimal digits. 4 Bytes of memory
        - double : decimal, numeric type. Double precision floating-point values. 15 decimal digits. 8 Bytes of memory

    - Non-Numeric:
        - char : character, character type. 1 Byte of memory.
        - signed char : character, character type. 1 Byte of memory and ranges from -128 to 127.
        - unsigned char : character, character type. 1 Byte of memory and ranges from 0 to 255.
        - wchar_t : Wide character. 2 to 4 bytes long
        - bool : boolean, logical values true or false.
        - void : null, none type. Used for functions that return nothing

    For the following:
        <DATATYPE> must be replaced with a primative data type
        <SIZE> indicates the length and can only be replaced by an unsigned int

    The derived data types are:
        - <DATATYPE> arrayName[<SIZE>] : array. <DATATYPE> refers to the data type of the values in the array
        - <DATATYPE> functionName(args) {
            // function body
            return returnValue; // if applicable
        } : function. <DATATYPE> refers to the function's return type
        - <DATATYPE>* pointerName : pointer. (the * is there on purpose)

    The user defined data types are:

        - enum EnumName{EnumValue1, EnumValue2, ...} : enumeration.
        - struct StuctName{
            <DATATYPE> member1;
            <DATATYPE> member2;
            // ... etc
        }; : stucture. Group together different data types under one name
        - union UnionName{
            <DATATYPE> member1;
            <DATATYPE> member2;
            // ... etc
        }; : union. Group together different data types in the same memory location. can only access one member at a time.
        - class className{
            private:
            <DATATYPE> member1;
            <DATATYPE> member2;
            // ... etc
            public:
            ClassName(); // constructor
            void memberFunction1();
            void memberFunction2();
            // ... etc

        }; : class. Object oriented program. Consists of data members AND functions.
        - typedef : used to give an alias to data types

    The abstract data types are:

        - linked list. Combination of a struct and class.
            struct Node{
                int data;
                Node* next;
            };
            class LinkedList{
                private:
                Node* head;
                public:
                LinkedList();
                void insertFront(int value);
                void display();
            };
        - stack. LIFO (Last-In-First-Out)
            #include <stack>
            stack<int>s;
            s.push(1); // add 1 to the stack
            s.push(2); // add 2 to the stack
            // ... etc
            s.pop() // remove the recent addition to the stack
        - queue. FIFO (First-In-First-Out)
            #include <queue>
            queue<int>q;
            q.push(1); // add 1 to the queue
            q.push(2); // add 2 to the queue
            // ... etc
            q.pop(); // remove the oldest addition to the queue
        - tree. Nodes connected by edges
            struct TreeNode{
                int data;
                TreeNode* left;
                TreeNode* right;
            };
            TreeNode* createSampleTree();

            // within the main function:
            TreeNode* myTree = createSampleTree();

    Data type modifiers:
        - signed : this is default
        - unsigned : make a numeric data type only positive
        - short : shortens integer size
        - long : increases integer size
        - float : single point precision
        - double : double point precision
        - long double : extends double point precision (more decimals :) )

    Auto keyword:
        auto variable = initializer;
        - The compiler chooses what data type to assign a variable when compiling

*/

#include <iostream>

using namespace std;

int main()
{
    // Numeric data types examples:
    short a = 65;
    unsigned short b = 99;
    int c = -44;
    unsigned int d = 2147483647;
    long e = 2148;
    unsigned long f = 3544663315;
    long long int g = 18444999555222;
    unsigned long long int h = 18446744073709551615;
    float i = 9.81f; // the f makes it a float so that the variable uses less memory
    double j = 15.4302952341;

    // Non numeric data types examples:
    char k = 'k';
    signed char l = '-3';
    unsigned char m = 'm';
    wchar_t o = L'A';
    bool p = true;

    return 0;
}

void q() {
// void datatype returns nothing
}
