//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBHomeButtonShowPasscodeRecognizer.h"

@class BSTimer, NSString;

@interface SBDashBoardHomeButtonShowPasscodeRecognizer : NSObject <SBHomeButtonShowPasscodeRecognizer>
{
    NSString *_simplePublicDescription;
    id <SBHomeButtonShowPasscodeRecognizerDelegate> _delegate;
    unsigned long long _state;
    _Bool _fingerWasOnInitially;
    _Bool _fingerHasLifted;
    BSTimer *_minimumTimer;
    NSString *_terminalStateReasoning;
}

- (void).cxx_destruct;
- (void)_invalidateMinimumTimer;
- (void)_minimumTimerFired;
- (void)_reallySetState:(unsigned long long)arg1 forReason:(id)arg2;
- (void)_simulateTimerFiring;
- (unsigned long long)_state;
- (void)_switchedFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <SBHomeButtonShowPasscodeRecognizerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (id)initWithFingerOn:(_Bool)arg1;
- (void)noteAuthenticated:(_Bool)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
