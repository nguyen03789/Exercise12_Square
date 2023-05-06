#include <stdio.h>
#include <stdint.h>
#include <math.h>
using namespace std;

class Rectangle{
    private:
        int8_t lenght;
        int8_t width;
    public:
        int8_t get_lenght();
        int8_t get_width();
        void Set_Rectangle(int8_t lenght = 0, int8_t width = 0);
};

void Rectangle::Set_Rectangle(int8_t lenght, int8_t width){
    this->lenght = lenght;
    this->width = width;
}

int8_t Rectangle::get_lenght(){
    return this->lenght;
}

int8_t Rectangle::get_width(){
    return this->width;
}

class Rectangle_cal{
    private:
        Rectangle A;
    public:
        Rectangle_cal(Rectangle A);
        void Get_Perimeter(Rectangle A);
        void Get_Area(Rectangle A);
        void Get_Diagonal_lenght(Rectangle A);
        void Square_or_not(Rectangle A);
};

Rectangle_cal::Rectangle_cal(Rectangle A){
    this->A = A;
}

void Rectangle_cal::Get_Perimeter(Rectangle A){
     double result = 2 * (A.get_lenght() + A.get_width());
     printf("The Perimeter of Rectangle is %lf\n",result) ;
}

void Rectangle_cal::Get_Area(Rectangle A){
     double result = A.get_lenght() * A.get_width();
     printf("The Area of Rectangle is %lf\n",result) ;
}

void Rectangle_cal::Get_Diagonal_lenght(Rectangle A){
     double result = sqrt(pow(A.get_lenght(),2) + pow(A.get_width(),2));
     printf("The lenght of Diagonal is %lf\n",sqrt(result)) ;
}

void Rectangle_cal::Square_or_not(Rectangle A){
    if (A.get_lenght() == A.get_width()) printf("The rectangle is square\n");
    else printf("The rectangle isn't square\n");
}


int main(int argc, char const *argv[])
{
    Rectangle C,B;
    C.Set_Rectangle(5,2);
    B.Set_Rectangle(5,5);
    Rectangle_cal Set(C);
    Rectangle_cal Set_1(B);
    Set.Get_Area(C);
    Set.Get_Perimeter(C);
    Set.Get_Diagonal_lenght(C);
    Set.Square_or_not(C);
    Set_1.Square_or_not(B);
    return 0;
}
