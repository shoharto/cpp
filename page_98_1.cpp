//program 8.1

class Shape{
    private:
    double area;
    public:
    void setArea(double);
    double getArea();
};

void Shape::setArea(double area){
    this->area=area;
}

class Circle:public Shape{
    private:
    double radius;
}

d. Assuming a main method has the following declarations:
Shape s;
Circle c;