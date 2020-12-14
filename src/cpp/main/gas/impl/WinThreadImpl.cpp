#include "WinThreadImpl.hpp"

namespace gas{
namespace impl{
namespace win{
  
static DWORD WINAPI proc(::LPVOID ptr){
    ((gas::impl::ThreadImpl*)ptr)->run();
    return 0;
}

WinThreadImpl::WinThreadImpl(Task* task): gas::impl::ThreadImpl(task), 
    mHandle(INVALID_HANDLE_VALUE),
    mId(0)
{}

WinThreadImpl::~WinThreadImpl(){
    if(mHandle != INVALID_HANDLE_VALUE){
        CloseHandle(mHandle);
        mId = 0;
    }           
    mTaskRef = nullptr;
}

void WinThreadImpl::join(){
    // @todo: do we need to abort task execution here?
    WaitForSingleObject(mHandle, INFINITE);
}

void WinThreadImpl::start(){
    mHandle = CreateThread(NULL, 0, 
        /*thread_func*/proc,
        /*data*/this,
        0, &mId);
}

}        
}
}
