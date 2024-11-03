#include <iostream>
#include <cmath>
using namespace std;

class Vector3D {
private:
    float x, y, z;

public:
    Vector3D(float a = 0, float b = 0, float c = 0) : x(a), y(b), z(c) {}

    void display() { cout << "(" << x << ", " << y << ", " << z << ")" << endl; }
    Vector3D add(const Vector3D &v) { return Vector3D(x + v.x, y + v.y, z + v.z); }
    float dot_product(const Vector3D &v) { return x * v.x + y * v.y + z * v.z; }
    bool coincide(const Vector3D &v) { return x == v.x && y == v.y && z == v.z; }
    float norm() { return sqrt(x * x + y * y + z * z); }

    // Compare by norm and return by reference
    Vector3D& normax(Vector3D &v) { return (this->norm() >= v.norm()) ? *this : v; }
};

int main() {
    Vector3D v1(1, 2, 3), v2(4, 5, 6);
    Vector3D sum = v1.add(v2);
    sum.display();
    cout << "Dot product: " << v1.dot_product(v2) << endl;
    cout << "Are coincident: " << (v1.coincide(v2) ? "Yes" : "No") << endl;
    cout << "Greater norm: ";
    v1.normax(v2).display();
    return 0;
}
