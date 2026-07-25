#include <chrono>
#include <iostream>
class Timer {
public:
  void reset() { m_begin = Clock::now(); }

  double elapsed() {
    return std::chrono::duration_cast<Second>(Clock::now() - m_begin).count();
  }

private:
  using Clock = std::chrono::steady_clock;
  using Second = std::chrono::duration<double, std::ratio<1>>;
  std::chrono::time_point<Clock> m_begin{Clock::now()};
};

int main() {
  Timer t;
  for (int i{0}; i < 1000000; ++i)
    ;
  std::cout << t.elapsed() << " Seconds have passed,\n";
}
