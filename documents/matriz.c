#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
int matriz1[4][5], matriz2[5][2], matriz3[4][2];
printf("PRIMEIRA  MATRIZ\n");
for (int i = 0; i < 4; i++){
  for (int j = 0; j< 5; j++){
  printf("Matriz[%d][%d]: ", i,j);
  scanf("%d", &matriz1[i][j]);
  }}
  printf("SEGUNDA MATRIZ\n");
for (int i = 0; i < 5; i++){
  for (int j = 0; j< 2; j++){
  printf("Matriz[%d][%d]: ", i,j);	
  scanf("%d", &matriz2[i][j]);}}
  printf("TERCEIRA MATRIZ\n");
for (int i = 0; i < 4; i++){
  for (int j = 0; j< 2; j++){
  matriz3[i][j] = matriz1[i][j] * matriz2[i][j];
}}
for (int i = 0; i < 4; i++){
  for (int j = 0; j< 2; j++){
  printf("%d\n",matriz3[i][j]);
}}
}
