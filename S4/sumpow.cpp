#include <iostream>  
#include <cmath>  
#include <array>  
using namespace std;  
  
#define forLoop(var, max) for(int var = 0; var < static_cast<int>(max); var++)  
  
int main() {  
  int N;  
  cin >> N;  
  
  int p[10];  
  forLoop(i, 10) {  
    p[i] = pow(i, N);  
  }  
  
  int max_digit = 10;  
  forLoop(i, 10) {  
    if (p[i] > 100000000) {  
      max_digit = i;  
      break;  
    }  
  }  
  
  forLoop(a, max_digit) {  
    int x = a * 10000000;  
    int psum = p[a];  
  
    forLoop(b, max_digit) {  
      x += b * 1000000;  
      psum += p[b];  
  
      forLoop(c, max_digit) {  
        x += c * 100000;  
        psum += p[c];  
  
        forLoop(d, max_digit) {  
          x += d * 10000;  
          psum += p[d];  
  
          forLoop(e, max_digit) {  
            x += e * 1000;  
            psum += p[e];  
  
            forLoop(f, max_digit) {  
              x += f * 100;  
              psum += p[f];  
  
              forLoop(g, max_digit) {  
                x += g * 10;  
                psum += p[g];  
  
                forLoop(h, max_digit) {  
                  x += h;  
                  psum += p[h];  
                  if (x == psum) {  
                    cout << x << endl;  
                  }  
                  psum -= p[h];  
                  x -= h;  
                }  
                psum -= p[g];  
                x -= g * 10;  
              }  
              psum -= p[f];  
              x -= f * 100;  
            }  
            psum -= p[e];  
            x -= e * 1000;  
          }  
          psum -= p[d];  
          x -= d * 10000;  
        }  
        psum -= p[c];  
        x -= c * 100000;  
      }  
      psum -= p[b];  
      x -= b * 1000000;  
    }  
    x -= a * 10000000;  
  }  
  
  return 0;  
}
