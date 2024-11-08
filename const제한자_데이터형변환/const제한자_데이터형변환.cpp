# include <iostream>
//# define PI 3.14159 // C의 매크로 상수 <-> const
using namespace std;


int main(){
    // const
    const float PI = 3.14159;
    // 바뀌어선 안되는 수
    // 바뀔 필요가 없는 수

    int r = 3;
    float area = r*r*PI;

    // 형변환
    int a = 3.14;
    // cout << a << endl; // 3

    char c = 'A';

    // 1. C스타일의 형변환
    cout << (int)c << " " << int(c) << endl; // 65 65
    // 2. 좀 더 제한적인 형 변환 -> C스타일보다 명시적, 안정적
    cout << static_cast<int>(c) << endl; // 65




    return 0;
}