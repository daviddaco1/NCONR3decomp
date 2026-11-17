// Adaptado de zeldaret/ss, CC0, commit 96f2dd5497c4ceb595de76fd897fbb1542b27323.
#include <nw4r_ss_compat/snd_version.h>
#include "nw4r/snd/snd_MmlSeqTrack.h"

/* Original source:
 * kiwi515/ogws
 * src/nw4r/snd/snd_MmlSeqTrack.cpp
 */

/*******************************************************************************
 * headers
 */

#include "nw4r/snd/snd_MmlParser.h"

/*******************************************************************************
 * functions
 */

namespace nw4r { namespace snd { namespace detail {

MmlSeqTrack::MmlSeqTrack() {}

MmlSeqTrack::ParseResult MmlSeqTrack::Parse(bool doNoteOn)
{
	return mParser->Parse(this, doNoteOn);
}

}}} // namespace nw4r::snd::detail

