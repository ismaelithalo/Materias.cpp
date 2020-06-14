#include <iostream>

using namespace std;

class stat
{
  public:
    double media(int data[], int size)
    {
      double mu = 0;
      for (int i = 0; i < size; i++) {
        mu = mu + data[i];
      }
      return mu/size;
    }

    double media(float data[], int size)
    {
      double mu = 0;
      for (int i = 0; i < size; i++) {
        mu = mu + data[i];
      }
      return mu/size;
    }

    double media(double data[], int size)
    {
      double mu = 0;
      for (int i = 0; i < size; i++) {
        mu = mu + data[i];
      }
      return mu/size;
    }
};

int main(int argc, char const *argv[]) {
  int v1[] = {1, 2, 3, 4, 5, 6};
  double v2[] = {1.1, 2.1, 3.1, 4.1, 5.1, 6.1};
  float v3[] = {1.2, 2.2, 3.2, 4.2, 5.2, 6.2};

  stat calculador;

  cout  << calculador.media(v1, 6) << endl
        << calculador.media(v2, 6) << endl
        << calculador.media(v3, 6) << endl;
  return 0;
}
