// micro-C example 1
(* n = n + 1*)
int g ;
int h[3] ;
void main(int n) {
  h[0] = 1;
  while (n > 0) {
    print n;
    n = n - 1;
  }
  println;
}
