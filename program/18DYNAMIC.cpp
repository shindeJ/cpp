#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class String
{
    private:
        char *arr;
        int size;
    public:
        String():size(0) 
        {
           arr = new char[size+1];
        }

        String(char *s):size(strlen(s)) 
        {
           arr = new char[size+1];
           strcpy(arr, s);
        }

        void show()
        {
           std::cout << arr << std::endl;
        }

        void join(String &a, String &b)
        {
           size = a.size + b.size;
           delete arr;
           arr = new char[size+1];
           strcpy(arr, a.arr);
           strcat(arr, b.arr);
        }
};

int main(void)
{
    char *name = "Jyotiram Shinde";

    String name1(name);
    String name2("Prashant Chitkote ");
    String name3("Omhari Shinde");
    String s1, s2;
    s1.join(name1, name2); 
    s2.join(s1, name3);
    name1.show();
    name2.show();
    name3.show();
    s1.show();
    s2.show();
    return 0;
}

