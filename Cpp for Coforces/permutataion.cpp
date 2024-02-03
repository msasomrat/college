#include <algorithm>
#include <cstddef>
#include <iostream>
#include <string>
#include <vector>

void permutate(const std::string& s, std::vector<int>& index, std::size_t depth, int& count)
{
    if (depth == s.size())
    {
        ++count;
        for (std::size_t i = 0; i < s.size(); ++i)
        {
            std::cout << s[index[i]];
        }
        std::cout << "\n";
        return;
    }

    for (std::size_t i = 0; i < s.size(); ++i)
    {
        index[depth] = i;
        permutate(s, index, depth+1, count);
    }
}

int main()
{
    std::string s("ABC");

    if (s.find_first_not_of(s.front()) == std::string::npos)
    {
        std::cout << "Only 1 permutation exists";
        return 0;
    }

    std::sort(s.begin(), s.end());

    std::cout << s << "\n**********\n";

    std::vector<int> index(s.size());
    int count = 0;

    permutate(s, index, 0, count);

    std::cout << "\nTotal permutations with repetitions: " << count;
}