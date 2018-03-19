#include <iostream>

class TANK
{
    public:
        TANK();
        void moveUpDown();
        void display();
        void fire();
        bool isDeath();
    private:
        int position;
        int firePower;
        int fireSpeed;
        int health;
};

class BULLET
{
        public:
        BULLET();
        void isHitTarget();
        void display();

    private:
        int direction;
        int position;
        int power;
        int speed;

};

class BOARD
{
    public:
    private:
        vector<BULLET> listOfBullet;
};
int main()
{
    return 0;
}
