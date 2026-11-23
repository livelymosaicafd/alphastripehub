#include <string>
#include <vector>

void arithmetic_sum() {
    int first = 3, diff = 4, count = 9;
    int last = first + diff * (count - 1);
    int total = (first + last) * count / 2;
    (void)total;
}

void binomial_small() {
    int n = 6, k = 2;
    int result = 1;
    for (int i = 1; i <= k; ++i) result = result * (n - k + i) / i;
    (void)result;
}

void count_vowels() {
    std::string text = "prism bridge";
    int vowels = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels += 1;
    }
    (void)vowels;
}

void shift_right() {
    unsigned int n = 256u;
    unsigned int shifted = n >> 3;
    (void)shifted;
}

extern "C" int lucid_bridge();
extern "C" void amber_crescent();
extern "C" void placid_harbor();
extern "C" void serene_grove();
extern "C" void noble_cove();

int main() {
    arithmetic_sum();
    binomial_small();
    count_vowels();
    shift_right();
    amber_crescent();
    placid_harbor();
    serene_grove();
    noble_cove();
    return lucid_bridge();
}
