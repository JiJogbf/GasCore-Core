#ifndef GAS_IMPL_UNIX_UNIX_THREAD_IMPL_HPP_13122020_175112
#define GAS_IMPL_UNIX_UNIX_THREAD_IMPL_HPP_13122020_175112

#include "..\Task.hpp"
#include "ThreadImpl.hpp"

namespace gas{
    namespace impl{
        namespace unix{
            class UnixThreadImpl: public gas::impl::ThreadImpl{
            private:
                // platform specific variables for thread
            public:
                UnixThreadImpl(Task* task);
                ~UnixThreadImpl();
                void join() override;
                void start() override;
            };
        }
    }
}

#endif 