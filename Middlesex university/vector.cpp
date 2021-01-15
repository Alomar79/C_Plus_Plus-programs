#include <iostream>
#include <vector>

//using namespace std;

int main()
{
    std::vector<int> nums = {1,2,5,7,9};
    for(int n : nums)
        std::cout<<n<<'\n';
    std::cout << "Hello world!" << std::endl;
    return 0;
}
