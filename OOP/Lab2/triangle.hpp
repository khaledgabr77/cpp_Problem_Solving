#ifndef TRIANGLE_HPP
#define TRIANGLE_HPP

class Triangle{

  private:
    double height, base;
  public:

    Triangle(double height_, double base_);
    
    double getHeight();
    void setHeight(double height_);
    
    double getBase();
    void setBase(double base_);
    
    double getArea();
    double getPerimeter();
    
    
    
    ~Triangle() {}
};
#endif // TRIANGLE_HPP
