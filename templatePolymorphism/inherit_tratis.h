#pragma once
#include <type_traits>

struct base_tratis {};
struct derived_traits {};
template<typename T>
using inherit_traits = typename std::remove_reference_t<T>::inherit_category;