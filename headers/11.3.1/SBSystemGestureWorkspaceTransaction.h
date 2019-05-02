//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBMainWorkspaceTransaction.h"

@class NSString, UIGestureRecognizer;

@interface SBSystemGestureWorkspaceTransaction : SBMainWorkspaceTransaction
{
    NSString *_suppressionReason;
    UIGestureRecognizer *_gestureRecognizer;
    long long _completionType;
}

- (void).cxx_destruct;
- (void)_begin;
- (void)_beginAnimation;
- (void)_didComplete;
- (void)_finishWithCompletionType:(long long)arg1;
- (void)_setupAnimation;
@property(readonly, nonatomic) long long completionType; // @synthesize completionType=_completionType;
- (void)finishWithCompletionType:(long long)arg1;
@property(retain, nonatomic) UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (id)initWithTransitionRequest:(id)arg1;
- (_Bool)shouldSuppressMedusaKeyboardDuringGesture;
- (void)systemGestureStateChanged:(id)arg1;

@end
