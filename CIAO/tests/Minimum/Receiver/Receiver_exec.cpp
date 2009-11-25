// $Id$

#include "Receiver_exec.h"

namespace CIAO_Minimum_Receiver_Impl
{
  //==================================================================
  // Component Executor Implementation Class:   Receiver_exec_i
  //==================================================================

  Receiver_exec_i::Receiver_exec_i (void)
  {
  }

  Receiver_exec_i::~Receiver_exec_i (void)
  {
  }

  // Supported or inherited operations.

  // Attribute operations.

  // Port operations.

  // Operations from Components::SessionComponent

  void
  Receiver_exec_i::set_session_context (
    ::Components::SessionContext_ptr ctx)
  {
    this->context_ =
      ::Minimum::CCM_Receiver_Context::_narrow (ctx);

    if (CORBA::is_nil (this->context_.in ()))
    {
      throw ::CORBA::INTERNAL ();
    }
  }

  void
  Receiver_exec_i::configuration_complete ()
  {
    // Your code here.
  }

  void
  Receiver_exec_i::ccm_activate ()
  {
    // Your code here.
  }

  void
  Receiver_exec_i::ccm_passivate ()
  {
    // Your code here.
  }

  void
  Receiver_exec_i::ccm_remove ()
  {
    // Your code here.
  }

  //==================================================================
  // Home Executor Implementation Class:   ReceiverHome_exec_i
  //==================================================================

  ReceiverHome_exec_i::ReceiverHome_exec_i (void)
  {
  }

  ReceiverHome_exec_i::~ReceiverHome_exec_i (void)
  {
  }

  // Supported or inherited operations.

  // Home operations.

  // Factory and finder operations.

  // Attribute operations.

  // Implicit operations.

  ::Components::EnterpriseComponent_ptr
  ReceiverHome_exec_i::create ()
  {
    ::Components::EnterpriseComponent_ptr retval =
      ::Components::EnterpriseComponent::_nil ();

    ACE_NEW_THROW_EX (
      retval,
      Receiver_exec_i,
      ::CORBA::NO_MEMORY ());

    return retval;
  }

  extern "C" RECEIVER_EXEC_Export ::Components::HomeExecutorBase_ptr
  create_Minimum_ReceiverHome_Impl (void)
  {
    ::Components::HomeExecutorBase_ptr retval =
      ::Components::HomeExecutorBase::_nil ();

    ACE_NEW_RETURN (
      retval,
      ReceiverHome_exec_i,
      ::Components::HomeExecutorBase::_nil ());

    return retval;
  }
}

