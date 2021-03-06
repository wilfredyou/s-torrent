#include "hub.h"
#include <regex>
#include <functional>
#include <stdexcept>

namespace events
{
    std::map < std::string, std::shared_ptr < Filter_node < std::shared_ptr < Event > > > > Hub::filters;
    Broadcaster < std::shared_ptr < Event > > Hub::broadcaster;

    Filter_node < std::shared_ptr < Event > >& Hub::get_filter ( std::string regex )
    {
        if ( filters.find ( regex ) == filters.end () )
        {
            std::function < bool ( std::shared_ptr < Event > ) > qualifies = std::bind (
                    [] ( std::shared_ptr < Event > event, std::string regex )
                    {
                        return std::regex_search ( event->get_type (), std::regex ( regex ) );
                    },
                    std::placeholders::_1, regex );

            std::shared_ptr < Filter_node < std::shared_ptr < Event > > > new_filter =
                std::make_shared < Filter_node < std::shared_ptr < Event > > > ( qualifies );

            broadcaster.subscribe ( new_filter );
            filters.insert ( { regex, new_filter } );
        }

        return *( filters.at ( regex ) );
    }

    void Hub::send ( std::shared_ptr < Event > event )
    {
        broadcaster.receive ( event );
    }
}
