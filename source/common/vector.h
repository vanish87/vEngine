
#include <array>

template <typename T>
class Vector2
{
public:
    constexpr Vector2() : data{0} {}

private:
    std::array<T, 2> data;
};
