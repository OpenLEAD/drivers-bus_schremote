#include <boost/test/unit_test.hpp>
#include <bus_schremote/Dummy.hpp>

using namespace bus_schremote;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    bus_schremote::DummyClass dummy;
    dummy.welcome();
}
