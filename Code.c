#include <stdio.h>
void Func(int A[], int B[], int summ, int N) {
  int med;
  med = summ / N;
  for (int i = 0; i < N; i++) {
    if (A[i] > med) {
      B[i] = med;
    } else {
      B[i] = A[i];
    }
  }
}
void Input(int A[], int B[], int N, int *summ) {
  for (int i = 0; i < N; i++) {
    scanf("%d", &A[i]);
    *summ += A[i];
  }
}
void Output(int B[], int N) {
  for (int i = 0; i < N; i++) {
    printf("%d ", B[i]);
  }
}
int main(void) {
  int N = 0;
  int summ = 0;
  scanf("%d", &N);
  int A[N * sizeof(int)];
  int B[N * sizeof(int)];
  Input(A, B, N, &summ);
  Func(A, B, summ, N);
  Output(B, N);
  return 0;
}