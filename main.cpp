#include <iostream>

using namespace std;

struct Vector3
{
    Vector3(float xx, float yy, float zz)
    {
        x = xx;
        y = yy;
        z = zz;
    };
    float x;
    float y;
    float z;
};

/*Esta es una anotacion */

void Addition(Vector3 a, Vector3 b, Vector3 *res);
Vector3 Subtraction (Vector3 a, Vector3 b);
void Printvector(Vector3 *v);

int main()
{
    Vector3 a(10,1,13);
    Vector3 b(16,25,30);
    Vector3 res(0,0,0);
    Addition(a,b,&res);
    Printvector(&res);
    return 0;
}

void Addition(Vector3 a, Vector3 b, Vector3 *res)
{
    res->x = a.x + b.x;
    res->y = a.y + b.y;
    res->z = a.z + b.z;
}
void Printvector(Vector3 *v)
{
    cout<<"This is the vector: ("<<v->x <<","<<v->y<<","<< v->z<<")"<<endl;
}
