#include <iostream>
#include <map>
#include <memory>

using namespace std;

/************************************************************/

static int totalBytes = 0;
static map<void*, size_t> locations;
int main()
{
        void * x;
        size_t  y;
        locations.insert(std::pair<void*, size_t>(x, y));
}
