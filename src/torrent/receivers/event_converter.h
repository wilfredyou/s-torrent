#ifndef TORRENT_EVENT_CONVERTER_GUARD
#define TORRENT_EVENT_CONVERTER_GUARD

#include <memory>

#include "events/receiver.h"
#include "events/events.h"

namespace torrent
{
    class Event_converter : public events::Receiver < std::shared_ptr < events::Event > >
    {
        public:
            Event_converter () = default;

            void receive ( std::shared_ptr < events::Event > event );

            virtual ~Event_converter () noexcept = default;
    };
}

#endif //TORRENT_EVENT_CONVERTER_GUARD
