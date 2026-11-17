#include <types.h>

namespace nw4r {
namespace ef {

class DrawStrategy {
public:
    virtual ~DrawStrategy() {}
};

class DrawBillboardStrategy : public DrawStrategy {
public:
    DrawBillboardStrategy();
    virtual ~DrawBillboardStrategy() {}
    u8 _pad[0xE0 - 4];
};

class DrawDirectionalStrategy : public DrawStrategy {
public:
    DrawDirectionalStrategy();
    virtual ~DrawDirectionalStrategy() {}
    u8 _pad[0xE0 - 4];
};

class DrawFreeStrategy : public DrawStrategy {
public:
    DrawFreeStrategy();
    virtual ~DrawFreeStrategy() {}
    u8 _pad[0xE0 - 4];
};

class DrawLineStrategy : public DrawStrategy {
public:
    DrawLineStrategy();
    virtual ~DrawLineStrategy() {}
    u8 _pad[0xE0 - 4];
};

class DrawPointStrategy : public DrawStrategy {
public:
    DrawPointStrategy();
    virtual ~DrawPointStrategy() {}
    u8 _pad[0xE0 - 4];
};

class DrawStripeStrategy : public DrawStrategy {
public:
    DrawStripeStrategy();
    virtual ~DrawStripeStrategy() {}
    u8 _pad[0xE0 - 4];
};

class DrawSmoothStripeStrategy : public DrawStrategy {
public:
    DrawSmoothStripeStrategy();
    virtual ~DrawSmoothStripeStrategy() {}
    u8 _pad[0xE0 - 4];
};

class DrawStrategyBuilder {
public:
    DrawStrategy* Create(u32 type);
};

DrawStrategy* DrawStrategyBuilder::Create(u32 type) {
    static DrawBillboardStrategy billboardStrategy;
    static DrawDirectionalStrategy directionalStrategy;
    static DrawFreeStrategy freeStrategy;
    static DrawLineStrategy lineStrategy;
    static DrawPointStrategy pointStrategy;
    static DrawStripeStrategy stripeStrategy;
    static DrawSmoothStripeStrategy smoothStripeStrategy;

    switch (type) {
    case 0:
        return &billboardStrategy;
    case 1:
        return &directionalStrategy;
    case 2:
        return &freeStrategy;
    case 3:
        return &lineStrategy;
    case 4:
        return &pointStrategy;
    case 5:
        return &stripeStrategy;
    case 6:
        return &smoothStripeStrategy;
    default:
        return &billboardStrategy;
    }
}

} // namespace ef
} // namespace nw4r
