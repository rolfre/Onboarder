//-----------------------------------------------------------------------------
// <auto-generated>
//   This code was generated by a tool.
//
//   Changes to this file may cause incorrect behavior and will be lost if
//   the code is regenerated.
//
//   For more information, see: http://go.microsoft.com/fwlink/?LinkID=623246
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace org { namespace alljoyn { namespace Onboarding {

ref class OnboardingSignals;

public interface class IOnboardingSignals
{
    event Windows::Foundation::TypedEventHandler<OnboardingSignals^, OnboardingConnectionResultReceivedEventArgs^>^ ConnectionResultReceived;
};

public ref class OnboardingSignals sealed : [Windows::Foundation::Metadata::Default] IOnboardingSignals
{
public:
    // Calling this method will send the ConnectionResult signal to every member of the session.
    void ConnectionResult(_In_ Onboarding^ interfaceMemberArg);

    // This event fires whenever the ConnectionResult signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<OnboardingSignals^, OnboardingConnectionResultReceivedEventArgs^>^ ConnectionResultReceived 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<OnboardingSignals^, OnboardingConnectionResultReceivedEventArgs^>^ handler) 
        { 
            return _ConnectionResultReceived += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<OnboardingSignals^>(sender), safe_cast<OnboardingConnectionResultReceivedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _ConnectionResultReceived -= token; 
        } 
    internal: 
        void raise(OnboardingSignals^ sender, OnboardingConnectionResultReceivedEventArgs^ args) 
        { 
            _ConnectionResultReceived(sender, args);
        } 
    }

internal:
    void Initialize(_In_ alljoyn_busobject busObject, _In_ alljoyn_sessionid sessionId);
    void CallConnectionResultReceived(_In_ OnboardingSignals^ sender, _In_ OnboardingConnectionResultReceivedEventArgs^ args);

private:
    alljoyn_busobject m_busObject;
    alljoyn_sessionid m_sessionId;

    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _ConnectionResultReceived;

    alljoyn_interfacedescription_member m_memberConnectionResult;
};

} } } 
