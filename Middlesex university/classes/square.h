
class Square
{
    private:
        int side;
    public:
        Square(int side) {
            this -> side = side;
        }
        int width() {
            return side;
        }
        int area() {
            return side * side;
        }
        int perimeter() {
            return 4* side;
        }
};
