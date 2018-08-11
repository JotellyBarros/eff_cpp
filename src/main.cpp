#include <iostream>
#include <test.h>
#include <opencv2/highgui.hpp>

struct car
{
    int model;
    int color_develop;
    car()
    : model(2)
    , color(1)
    {
        std::cout << "Struct constructor" << std::endl;
    }
    void getFipTableValue()
    {
        std::cout << "FIP VALUE\n";
    }
};

int& sum(int& x, int& y, const char* string)
{
    std::cout << string << std::endl;
    static int c = x+y;
    x = c;
    y = c -1;
    return c;
}

int main()
{
    std::cout << "Hello Moto!" << std::endl;
    const char *string = "Isso eh uma string ou um ponteiro?";

    car gol;

    int x = 2, y = 3;
    auto val = sum(x,y,string);
    sum(x,y,string);
    sum(x,y,string);
    gol.getFipTableValue();
    std::cout << gol.color << std::endl;
    return 0;
}
