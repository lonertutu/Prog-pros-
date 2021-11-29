#include <iostream>
#include <map>
#include <vector> 
 
int main()
{
    int n;
    std:: cout << "n = "; std::cin >> n;
    int*A = new int[n];
 
    std::cout << "Enter your " << n << " elements:\n";
    for (int i = 0; i < n; i++)
       std::cin >> A[i];
    std::map<int, int> mp;

    for (int i = 0; i < n; i++)
       mp[A[i]]++;
    for(auto x:mp)
      std::cout << x.first << " key " << x.second << std::endl;
    delete[] A;
    system("pause");
    return 0;
}
