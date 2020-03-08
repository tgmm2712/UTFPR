#include <stdio.h>
#include <string.h>

int inter(int x1,int  y1,int  x2,int  y2,int  s1,int  s2) {
  float rr = (s1+s2) * (s1+s2);
  float cc = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
  return (cc <= rr) ? 1 : 0;
}

int main(void) {
  int m, n, k;
  scanf("%d %d %d", &m, &n, &k);
  int x[k], y[k], s[k];
  for (int i = 0; i < k; i++) {
    scanf("%d %d %d", &x[i], &y[i], &s[i]);
  }

  short adj[4+k][4+k];
  memset(adj, 0, sizeof adj);

  for (int i = 0; i < k; i++) {
    if (y[i] <= s[i]) {
      adj[4+i][0] = 1;
      adj[0][4+i] = 1;
    }
    if (x[i] <= s[i]) {
      adj[4+i][3] = 1;
      adj[3][4+i] = 1;
    }
    if (y[i] + s[i] >= n) {
      adj[4+i][2] = 1;
      adj[2][4+i] = 1;
    }
    if (x[i] + s[i] >= m) {
      adj[4+i][1] = 1;
      adj[1][4+i] = 1;
    }
  }

  for (int i = 0; i < k; i++) {
    for (int j = i; j < k; j++) {
      if (inter(x[i], y[i], x[j], y[j], s[i], s[j])) {
        adj[4+i][4+j] = 1;
        adj[4+j][4+i] = 1;
      }
    }
  }
  for (int i = 0; i < k + 4; i++) {
      for (int j = 0; j < k + 4; j++) {
          printf("%d ", adj[i][j]);
      }
      printf("\n");
  }

  int i = 0;
  int j = 0;
  int existe = 0;
  int usados[k+4];
  memset(usados, 0, sizeof(int) * (k+4));

  for (j = 1; j < k+4 && i < k+4; j++) {
    if (adj[i][j] == 1) {
      if (j == 3 || j == 2) {
        existe = 1;
        break;
      } else if (i != j && !usados[j]){
        usados[j] = 1;
        i = j;
        j = 0;
      }
    }
  }

  if (!existe) {
    i = 1;
    memset(usados, 0, sizeof(int) * (k+4));
    for (j = 2; j < k+4 && i < k+4; j++) {
      if (adj[i][j]) {
        if (j == 3 || j == 2) {
          existe = 1;
          break;
        } else if (i != j && !usados[j]){
          usados[j] = 1;
          i = j;
          j = 1;
        }
      }
    }
  }

  if (existe) {
    printf("N\n");
  } else {
    printf("S\n");
  }
  return 0;
}
