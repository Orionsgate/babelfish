#ifndef BABELFISH_H
#define BABELFISH_H

template <class T, class U>

class BabelFish {
  public:
    virtual U convertDateTime(const T& input) = 0;
    virtual T parseDateTime(const U& input) = 0;
};

#endif
