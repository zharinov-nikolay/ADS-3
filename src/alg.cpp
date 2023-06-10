// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int N = 0;
    int K = size - 1;
    int kol = 0;
    for (int i = 0; i < K; i++) {
        int C = N + (K - N) / 2;
        if (arr[C] == value) {
            if (arr[C - 1] == value || arr[C + 1] == value) {
                for (int j = C; arr[j] == value; j--) {
                    kol += 1;
                }
                for (int p = C + 1; arr[p] == value; p++) {
                    kol += 1;
                }
                return kol;
            } else {
                return 1;
            }
        } else if (arr[C] < value) {
            N = C + 1;
        } else {
            K = C;
        }
    }
    return 0;
}
