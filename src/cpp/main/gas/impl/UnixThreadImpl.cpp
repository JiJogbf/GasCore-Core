#include "UnixThreadImpl.hpp"

namespace gas{
namespace impl{
namespace unix{

UnixThreadImpl::UnixThreadImpl(Task* task): gas::impl::ThreadImpl(task){}
UnixThreadImpl::~UnixThreadImpl(){}
void UnixThreadImpl::join(){}
void UnixThreadImpl::start(){}

}
}
}