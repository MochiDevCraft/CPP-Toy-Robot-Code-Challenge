#include <iostream>
#include <regex>
#include <map>

class Robot{
    private:
        int positionX;
        int positionY;
        std::string direction;
        std::map<std::string, std::vector<int>> facingDirection;
    public:
        Robot(int x, int y, std::string d){
            positionX = x;
            positionY = y;   
        }
        void command();
        void move();
        void rotate();
        ~Robot(){}
};
class Table{
    private:
        int maxX;
        int maxY; 
    public:
        Table(int s = 4){
            maxX = s;
            maxY = s;
        }
        Table(int x=4, int y=4){
            maxX = x;
            maxY = y;
        }
        ~Table(){}
};
int main(){

    return 0;
}

