int contador(int n) {
  static int c = 1;

  return c+=n;
}
