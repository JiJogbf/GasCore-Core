#ifndef GAS_IMPL_WIN_WIN_THREAD_IMPL_HPP_13122020_175112
#define GAS_IMPL_WIN_WIN_THREAD_IMPL_HPP_13122020_175112

#include "..\Task.hpp"
#include "ThreadImpl.hpp"

#include <windows.h>

namespace gas{
    namespace impl{
        namespace win{
            class WinThreadImpl: public gas::impl::ThreadImpl{
            private:
                HANDLE mHandle;
                DWORD mId;
            public:
                WinThreadImpl(Task* task);
                ~WinThreadImpl();
                void join() override;
                void start() override;
            };
        }
    }
}

#endif 