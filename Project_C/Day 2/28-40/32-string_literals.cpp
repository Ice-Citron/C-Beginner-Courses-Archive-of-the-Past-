#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main(){

    const char name[8] = "cherno";
    const char* name2 = "cherno";

    cout << sizeof(name) / sizeof(char) << endl;
    cout << strlen(name) << endl;

    
    const wchar_t* name3 = L"Cherno";
    const char16_t* name4 = u"Cherno";
    const char32_t* name5 = U"Cherno";

    const char* example = R"(Line1
Line2
Line3
Line4
)";

    const char* ex = "Line1\n"
        "Line2\n"
        "Line3\n"
        "Line4\n";

    cout << example << endl;
    cout << ex << endl;

    cin.get();
    return 0;
}