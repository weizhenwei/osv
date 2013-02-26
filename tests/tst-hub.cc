#include "tst-hub.hh"
#include "tst-threads.hh"
#include "tst-malloc.hh"
#include "tst-timer.hh"
#include "tst-devices.hh"
#include "tst-eventlist.hh"
#include "tst-rwlock.hh"

using namespace unit_tests;

void tests::execute_tests() {
    test_threads threads;
    test_malloc malloc;
    test_timer timer;
    test_devices dev;
    test_eventlist evlist;
    test_rwlock rwlock;

    instance().register_test(&threads);
    instance().register_test(&malloc);
    instance().register_test(&timer);
    instance().register_test(&dev);
    instance().register_test(&evlist);
    instance().register_test(&rwlock);

    instance().run();
}
