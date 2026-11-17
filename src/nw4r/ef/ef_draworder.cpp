// Adaptado de kiwi515/ogws, CC0, commit 27fa94a593096eed7442efc4e70981fd52025b9c.
#include <nw4r_ef_compat/ef_effect.h>
#include <nw4r_ef_compat/ef_emitter.h>
#include <nw4r_ef_compat/ef_particle.h>
#include <nw4r/ef.h>
#include <nw4r/ut.h>

namespace nw4r {
namespace ef {

ut::List* DrawOrderBase::GetPMList(Effect* pEffect) {
    return &pEffect->mParticleManager;
}

void DrawOrder::Draw(Effect* pEffect, const DrawInfo& rInfo) {
    ut::List* pList = GetPMList(pEffect);

    NW4R_UT_LIST_FOREACH (ParticleManager, it, *pList, {
        it->BeginDraw();
        it->Draw(rInfo);
        it->EndDraw();
    })
}

void DrawOrder::Add(Effect* pEffect, ParticleManager* pManager) {
    ut::List* pList = GetPMList(pEffect);
    ParticleManager* pIt = NULL;

    while (
        (pIt = static_cast<ParticleManager*>(ut::List_GetPrev(pList, pIt)))) {

        if (pIt->mWeight <= pManager->mWeight) {
            break;
        }
    }

    pIt = static_cast<ParticleManager*>(ut::List_GetNext(pList, pIt));
    ut::List_Insert(pList, pIt, pManager);
}

} // namespace ef
} // namespace nw4r

extern "C" void Remove__Q34nw4r2ef9DrawOrderFPQ34nw4r2ef6EffectPQ34nw4r2ef15ParticleManager();
