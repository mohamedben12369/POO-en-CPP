#ifndef POINT_H
#define POINT_H

class Point {
private:
    float x, y;

public:
    Point(float x = 0, float y = 0); 
    void deplace(float dx, float dy);
    void affiche() const; 

#endif
