#include <iostream>
using namespace std;

class Test {
private:
    static int count;

public:
    void call() { count++; }
    static int get_count() { return count; }
};

int Test::count = 0;

int main() {
    Test t;
    t.call();
    t.call();
    cout << "Function call count: " << Test::get_count() << endl;
    return 0;
}
