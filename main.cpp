#include <map>
#include <string>
#include <string.h>
using namespace std;

map<const char*, int> m1;
map<string, int> m2;

int main(int argc, char **argv) {
  printf("m1: map<const char*, int>\n");
  printf("x=1, y=2, z=3\n");
  m1["x"] = 1; m1["y"] = 2; m1["z"] = 3;
  printf("x: %d, y: %d, z: %d\n", m1[strdup("x")], m1[strdup("y")], m1[strdup("z")]);
  printf("\n");
  printf("m2: map<string, int>\n");
  printf("x=1, y=2, z=3\n");
  m2["x"] = 1; m2["y"] = 2; m2["z"] = 3;
  printf("x: %d, y: %d, z: %d\n", m2[strdup("x")], m2[strdup("y")], m2[strdup("z")]);
  return 0;
}
