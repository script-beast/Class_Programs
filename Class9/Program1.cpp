#include <bits/stdc++.h>
using namespace std;

class Phone
{
private:
    int ram;
    int rom;

public:
    void set(int i, int j)
    {
        ram = i;
        rom = j;
    }

    int getRam()
    {
        return ram;
    }

    int getRom()
    {
        return rom;
    }
};

class onePlus : public Phone
{
private:
    int camera;
    int pro;

public:
    void set(int i, int j)
    {
        pro = j;
        camera = i;
    }

    int getCamera()
    {
        return camera;
    }

    int getPro()
    {
        return pro;
    }
};

class oppo : private Phone
{
private:
    int battery;
    int screen;

public:
    void set(int i, int j)
    {
        battery = j;
        screen = i;
    }

    int getBattery()
    {
        return battery;
    }

    int getScreen()
    {
        return screen;
    }
};

int main()
{
    onePlus op1;

    op1.set(10, 20);
    cout << op1.getCamera() << endl;
    cout << op1.getPro() << endl;

    cout << op1.getRam() << endl;

    return 0;
}