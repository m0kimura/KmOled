//*******1*********2*********3*********4*********4*********5*********6*********7*********8

#ifndef KMOLED_H
#define KMOLED_H

class KmOled{
  public:
    KmOled(int debug);
    void begin();
    void writeText(String txt, int sz, int x, int y);
    void clear();

  private:
    int Debug;

};

#endif
