// Три первых
#include "iostream"

/**
 * Смена мест параметров массива по их индексам.
 * @param m Сам массив.
 * @param pos_from Индекс первого элемента.
 * @param pos_to Индекс второго элемента.
 */
void swap_array_elements(int *m, int pos_from, int pos_to) {
    int temp = m[pos_from];
    m[pos_from] = m[pos_to];
    m[pos_to] = temp;
}

/**
 * Вывод переданного массива в cout.
 * @param m Сам массив.
 * @param m_size Размер массива.
 */
void print_array(int *m, int m_size) {
    for (int i = 0; i < m_size; i++) {
        std::cout << m[i] << " ";
    }
}

int main() {
    // Получение исходных данных для задачи.
    int N;
    std::cout << "N = ?\n";
    std::cin >> N;
    int arr[N];
    std::cout << "Set array elements:\n";
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < 3; i++) {
        // Выбираем минимальным индекс первого элемента массива.
        int new_min = i;
        // Поиск индекса минимального элемента.
        for (int j = i + 1; j < N; j++) {
            if (arr[j] < arr[new_min])
                new_min = j;
        }
        // Сдвиг найденного элемента на начальные позиции массива.
        if (i != new_min)
            for (int k = new_min; k > i; k--) {
                swap_array_elements(arr, k, k - 1);
            }
    }

    std::cout << "Result:\n";
    print_array(arr, N);
    return 0;
}
