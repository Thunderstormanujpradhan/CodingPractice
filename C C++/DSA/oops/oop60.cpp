    // (Multilevel Inheritance) Modify the program no. LE6.1 as follows:
    // Derive a class named as BOX from RECTANGLE class. Take necessary data & member
    // functions for this box class to calculate the volume of the box. All the data members are
    // initialized through the constructors. Show the result by accessing the area method of circle
    // and rectangle and the volume method of box class through the objects of box class.

    #include <iostream>
    using namespace std;

    class CIRCLE
    {
    protected:
        int radius;

    public:
        CIRCLE(int p)
        {
            radius = p;
        }
        void showx()
        {
            cout << "Area of the circle : " << 3.14 * radius * radius << endl;
        }
    };

    class RECTANGLE : public CIRCLE
    {
    protected:
        int l, b;

    public:
        RECTANGLE(int x, int y) : CIRCLE(x)
        {
            l = x;
            b = y;
        }
        void showy()
        {
            cout << "Area of rectangle is " << l * b << endl;
        }
    };

    class BOX : public RECTANGLE
    {

    protected:
        int l, b, h;

    public:
        BOX(int x, int y, int z) : RECTANGLE(x, y)
        {
            l = x;
            b = y;
            h = z;
        }
        void showz()
        {
            showx();
            showy();
            cout << "Area of box : " << l * b * h;
        }
    };

    int main()
    {
        int x, y, z;
        cout << "Enter the length, breadth and height of the box : ";
        cin >> x >> y >> z;
        BOX b(x, y, z);
        b.showz();

    }
