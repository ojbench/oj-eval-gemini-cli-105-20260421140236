#include <iostream>
#include <vector>
#include <iomanip>

int main() {
    int n, m;
    if (!(std::cin >> n >> m)) return 0;
    
    int target = n - m;
    std::vector<double> f(n + 1, 0.0);
    
    for (int i = target + 1; i <= n; ++i) {
        double sum = 0;
        for (int j = 0; j < i; ++j) {
            sum += f[j];
        }
        f[i] = 1.0 + sum / i;
    }
    
    std::cout << std::fixed << std::setprecision(2) << f[n] << std::endl;
    
    return 0;
}
