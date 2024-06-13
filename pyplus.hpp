#pragma once
#include <vector>
#include <iostream>

#define next(item, function, _default) (([&]() { function return item; return _default; })())

#define any(item, function) next(true, function if (item), false)
#define all(item, function) next(false, function if (!(item)), true)
#define none(item, function) next(false, function if (item), true)

#define sum(tp, item, function) (([&]() { \
    tp e = static_cast<tp>(0); function e += item; return e; })())
#define product(tp, item, function) (([&]() { \
    tp p = static_cast<tp>(0); function p *= item; return p; })())

template <typename tp>
concept iterable = requires(tp a) {
  typename std::iterator_traits<decltype(a.begin())>::value_type;
  typename std::iterator_traits<decltype(a.end())>::value_type;
};

template <typename tp>
  requires iterable<tp>
std::ostream &operator<<(std::ostream &os, const tp &a)
{
  os << '[';
  bool first = true;
  for (auto const &i : a)
  {
    if (!first)
      os << ", ";
    first = false;
    os << i;
  }
  return os << ']';
}
