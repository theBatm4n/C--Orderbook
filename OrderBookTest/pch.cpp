#include "pch.h"

#include "orderbook.cpp"

namespace googletest = ::testing;

enum class ActionType{
    Add,
    Modify,
    Cancel
};

struct Information{
    ActionType type;
    OrderType orderType_;
    Side side_;
    Price price_;
    Quantity quantity_;
    OrderId orderId_;
};

using Informations = std::vector<Information>;

struct Result{
    std::size_t allCount_;
    std::size_t bidCount_;
    std::size_t asKCount_;
};