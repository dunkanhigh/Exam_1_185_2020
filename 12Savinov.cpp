#include <iostream>
using namespace std;
class Game
{
public:
    Game(int x, int y) //Камень — 1, Ножницы — 2 Бумага — 3
    {
        this->x = x;
        this->y = y;
    };
    void show_result()
    {
        if (x == y)
        {
            cout << "Ничья" << endl;
        }
        else if (x == 1)
        {

            if (y == 2)
            {
                cout << "first player is win" << endl;
            }
            else
            {
                cout << "second player is win" << endl;
            }
        }
        else if (x == 2)
        {
            if (y == 1)
            {
                cout << "second player is win" << endl;
            }
            else
            {
                cout << "first player is win" << endl;
            }
        }
        else
        {
            if (y == 1)
            {
                cout << "first player is win" << endl;
            }
            else
            {
                cout << "second player is win" << endl;
            }
        }
    };

private:
    int x, y;
};
int main()
{
    int x_1, x_2;
    cout << "Fist player: " << endl;
    cin >> x_1;
    cout << "Second player: " << endl;
    cin >> x_2;
    Game first(x_1, x_2);
    first.show_result();
    return 0;
}