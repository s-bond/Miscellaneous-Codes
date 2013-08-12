#include <cstdlib>
#include <iostream>
#include <map>
using namespace std;

int main(int argc, char *argv[])
{    std::map<std::string, int> wordcounts;
    std::string s;
 
    while (std::cin >> s && s != "end")
        ++wordcounts[s];
 
    while (std::cin >> s && s != "end")
        std::cout << s << " " << wordcounts[s] << '\n';
    system("PAUSE");
    return EXIT_SUCCESS;
}
