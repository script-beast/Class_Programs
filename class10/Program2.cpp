#include <bits/stdc++.h>
using namespace std;

class game
{
private:
    int hp1, hp2;

public:
    game()
    {
        hp1 = 100;
        hp2 = 100;
    }

    int p1hp()
    {
        return hp1;
    }

    int p2hp()
    {
        return hp2;
    }

    void damage(int p)
    {
        if (p == 1)
            hp2 -= 10;

        if (p == 2)
            hp1 -= 10;
    }

    void health(int p)
    {
        if (p == 1)
            hp1 += 5;

        if (p == 2)
        {
            hp2 += 5;
        }
    }
};

int main()
{
    game g1;
    int turn = 1;

    do
    {
        cout << "Player " << turn << " Move :" << endl;

        cout << "1 - Attack \n2 - Regain" << endl;

        int inp;

        cin >> inp;

        if (inp == 1)
            g1.damage(turn);
        if (inp == 2)
            g1.health(turn);

        cout << "Player 1 health = " << g1.p1hp() << endl;
        cout << "Player 2 health = " << g1.p2hp() << endl;
        cout << endl;

        if (g1.p1hp() == 0 || g1.p2hp() == 0)
            break;

        turn = turn == 1 ? 2 : 1;

    } while (true);

    return 0;
}