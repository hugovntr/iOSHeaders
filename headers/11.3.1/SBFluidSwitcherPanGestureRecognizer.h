//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPanGestureRecognizer.h"

#import "SBGestureRecognizerTouchHistoryProviding.h"

@class NSString, SBFluidSwitcherViewController, SBTouchHistory;

@interface SBFluidSwitcherPanGestureRecognizer : UIPanGestureRecognizer <SBGestureRecognizerTouchHistoryProviding>
{
    SBFluidSwitcherViewController *_switcherViewController;
    SBTouchHistory *_touchHistory;
}

- (void).cxx_destruct;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (struct CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (double)peakSpeed;
- (void)reset;
@property(nonatomic) __weak SBFluidSwitcherViewController *switcherViewController; // @synthesize switcherViewController=_switcherViewController;
@property(retain, nonatomic) SBTouchHistory *touchHistory; // @synthesize touchHistory=_touchHistory;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
