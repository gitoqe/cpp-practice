// Три первых
#include "iostream"

void swap_array_elements(int *m, int pos_from, int pos_to) {
    int temp = m[pos_from];
    m[pos_from] = m[pos_to];
    m[pos_to] = temp;
}

void print_array(int *m, int m_size) {
    for (int i = 0; i < m_size; i++) {
        std::cout << m[i] << " ";
    }
}

int main() {
    int N;
    std::cout << "N = ?\n";
    std::cin >> N;
    int arr[N];
    std::cout << "Set array elements:\n";
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < 3; i++) {
        int new_min = i;
        // find min
        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[new_min])
                new_min = j;
        }
        // move min to front
        if (i != new_min)
            for (int k = new_min; k > i; k--) {
                swap_array_elements(arr, k, k - 1);
            }
    }

    std::cout << "Result:\n";
    print_array(arr, N);

    return 0;
}
